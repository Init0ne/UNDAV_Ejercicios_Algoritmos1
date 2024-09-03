#include <iostream>

using namespace std;

// Precondicion: @texto y @subTexto son cadena de caracteres. El tamano de @texto permite agregar @subTexto
// Postcondicion: Agrega en al final de @texto el @subTexto;
// Ejemplo:
// Concatenar(texto = "HOLA", subTexto = " Que tal")
// me cambiar texto a= "Hola Que tal"
void Concatenar(char texto[], char subTexto[]){

    int i = 0;
    int j = 0;
    
    while(texto[i] != '\0'){
        i++;
    }
    texto[i] = ' ';
    i++;
    while(subTexto[j] != '\0'){
        texto[i] = subTexto[j];
        i++;
        j++;
    }
    texto[i] = '\0';

    cout << texto << endl;
}

int main(){

    char texto[60];
    char subtexto[20];

    cout << "Ingrese el texto: " << endl;
    cin.getline(texto,60);
    cout << "Ingrese el subtexto: " << endl;
    cin.getline(subtexto,20);

    Concatenar(texto,subtexto);

    return 0;
}