#include <iostream>

using namespace std;

// Precondicion: @texto es una cadena de caracteres
// Postcondicion: Devuelve la cantidad de caracteres de @texto

int ContarCaracteres(char texto[]) {
    int cant_caracteres = 0;
    int contador = 0;
    bool flag = false;

    for(contador; flag != true; contador++) {
        if (texto[contador] == '\0') {
            flag = true;
        }
    }
    cant_caracteres = contador - 1;

    return cant_caracteres;
}

int main() {

    char texto[100];

    cout << "Ingrese el texto: " << endl;
    cin.getline(texto,100);

    cout << ContarCaracteres(texto) << endl;

    return 0;
}
