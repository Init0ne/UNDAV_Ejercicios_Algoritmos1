#include <iostream>

using namespace std;

// Precondicion: @textoOrigen es una cadena de caracteres. @textoDestino tiene un tamano igual o mayor que @textoOrigen
// Postcondicion: Copia el contenido de @textoOrigen en @textoDestino
void Copiar(char textoOrigen[], char textoDestino[]) {

    int i = 0;

    while(textoOrigen[i] != '\0'){

        textoDestino[i] = textoOrigen[i];
        i++;
    }

    cout << "La cadena nueva es -> " << textoDestino << endl;
}

int main(){

    char textoOrigen[100];
    char textoDestino[150];

    cout << "Ingrese el texto: " << endl;
    cin.getline(textoOrigen,100);

    Copiar(textoOrigen, textoDestino);

    return 0;
}