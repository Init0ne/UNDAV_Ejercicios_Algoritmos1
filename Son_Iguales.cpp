#include <iostream>

using namespace std;

// Precondicion: @texto1 y @texto2 son cadenas de caracteres
// Postcondicion: Devuelve true si @texto1 y @texto2 son iguales
bool SonIguales(char texto1[], char texto2[]){
    bool iguales = false;
    int i = 0;

    while(iguales != true && texto1[i] == texto2[i]){
        if(texto1[i] == '\0' && texto2[i] == '\0'){
            iguales = true;
        }
        i++;
    }
    
    return iguales;
}

int main(){

    char texto1[100];
    char texto2[100];

    cout << "Ingrese el texto1: " << endl;
    cin.getline(texto1,100);
    cout << "Ingrese el texto2: " << endl;
    cin.getline(texto2,100);

    if(SonIguales(texto1,texto2)){
        cout << "Son iguales!" << endl;
    }
    else{
        cout << "Son distintos :( )" << endl;
    }

    // cout << boolalpha;
    // cout << SonIguales(texto1,texto2) << endl;

    return 0;
}