#include <iostream>

using namespace std;

// Precondicion: @texto, @subTextoBusqueda y @subTextoReemplazo son cadenas de caracteres. El tamaño de @texto permite realizar los reemplazos.
// Postcondicion: Reemplaza todas las ocurrencias de @subTextoBusqueda en @texto con @subTextoReemplazo.
void ReemplazarSubTexto(char texto[], const char subTextoBusqueda[], const char subTextoReemplazo[]) {
    int i = 0; // Índice para recorrer texto
    int j;
    int k;
    char texto_Nuevo[100] = {0};
    int pos = 0; // Índice para la posición en texto_Nuevo

    while (texto[i] != '\0') {
        // Verifica si la subcadena comienza en la posición actual
        j = 0;
        while (subTextoBusqueda[j] != '\0' && texto[i + j] == subTextoBusqueda[j]) {
            j++;
        }

        // Si se encontró la subcadena completa
        if (subTextoBusqueda[j] == '\0') {
            // Reemplaza con subTextoReemplazo
            k = 0;
            while (subTextoReemplazo[k] != '\0') {
                texto_Nuevo[pos++] = subTextoReemplazo[k++];
            }
            i += j;
        } else {
            // Copia el carácter actual al texto_Nuevo
            texto_Nuevo[pos++] = texto[i++];
        }
    }

    texto_Nuevo[pos] = '\0';

    // Copia texto_Nuevo al texto original
    int l = 0;
    while (texto_Nuevo[l] != '\0') {
        texto[l] = texto_Nuevo[l];
        l++;
    }
    texto[l] = '\0'; 

    cout << "Texto modificado: " << texto << endl;
}

int main(){
    char texto[100];
    char subTextoBusqueda[10];
    char subTextoReemplazo[10];

    cout << "Escriba un texto: " << endl;
    cin.getline(texto,100);
    cout << "Indique el texto a buscar: " << endl;
    cin.getline(subTextoBusqueda,10);
    cout << "Indique el texto a reemplazar: " << endl;
    cin.getline(subTextoReemplazo,10);

    ReemplazarSubTexto(texto,subTextoBusqueda,subTextoReemplazo);

    return 0;
}