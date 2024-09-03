#include <iostream>
using namespace std;
// Consigna: Implementar todas las funciones que cumplan las postcondicion dada
// - Por su puesto que puede crear funciones auxiliares y hacer un lindo codigo claro y simple
// - Por su puesto que no puede utilizar librerias externas que resuelvan algo de lo pedido
// - En el main encontrara un codigo cliente que puede cambiarlo o utilizarlo para ir depurando sus implementaciones

// Precondicion: @texto es una cadena de caracteres
// Postcondicion: Devuelve la cantidad de caracteres de @texto
int ContarCaracteres(char texto[]);

// Precondicion: @textoOrigen es una cadena de caracteres. @textoDestino tiene un tamano igual o mayor que @textoOrigen
// Postcondicion: Copia el contenido de @textoOrigen en @textoDestino
void Copiar(char textoOrigen[], char textoDestino[]);

// Precondicion: @texto1 y @texto2 son cadenas de caracteres
// Postcondicion: Devuelve true si @texto1 y @texto2 son iguales
bool SonIguales(char texto1[], char texto2[]);

// Precondicion: @texto y @subTexto son cadena de caracteres. El tamano de @texto permite agregar @subTexto
// Postcondicion: Agrega en al final de @texto el @subTexto;
// Ejemplo:
// Concatenar(texto = "HOLA", subTexto = " Que tal")
// me cambiar texto a= "Hola Que tal"
void Concatenar(char texto[], char subTexto[]);


// Precondicion: @texto, @subTextoBusqueda y @subTextoReemplazo son cadena de caracteres. El tamano de @texto permite realizar los reemplazos
// Postcondicion: Agrega en al final de @texto el @subTexto;
// Ejemplo:
// texto= "LA LA LO LU"
// subTextoBusqueda = "LA"
// subTextoReemplazo = "OLA"
// ReemplazarSubTexto(texto, subTextoBusqueda, subTextoReemplazo)
// me modifica texto y ahora tendria: "OLA OLA LO LU"
void ReemplazarSubTexto(char texto[], char subTextoBusqueda[], char subTextoReemplazo[]);


int main()
{
    char texto[400] = "Algoritmos y Programacion 1 es un curso de la carrera Ingenieria en informatica. ";
    char subTexto[] = "En Algoritmos y Programacion 1 se estudian algoritmos y estructuras de datos utiles para pensar la progrmacion.";
    char textoBusqueda[] = "Algoritmos y Programacion 1";
    char textoReemplazo[] = "AyP1";
    char resultadoEsperado[] = "AyP1 es un curso de la carrera Ingenieria en informatica. En AyP1 se estudian algoritmos y estructuras de datos utiles para pensar la progrmacion.";    
    Concatenar(texto, subTexto);
    ReemplazarSubTexto(texto, textoBusqueda, textoReemplazo);
    if (SonIguales(texto, resultadoEsperado)) {
        cout << "OK!!!" << endl << texto;
    }
    else {
        cout << "Error!!" << endl << texto;
    }
}

int ContarCaracteres(char texto[]) {
    //TODO: Implementar
    return 0;
}

void Copiar(char textoOrigen[], char textoDestino[]) {
    //TODO: Implementar
}

bool SonIguales(char texto1[], char texto2[]) {
    return false;
}

void Concatenar(char texto[], char subTexto[]) {
    //TODO: Implementar
}


void ReemplazarSubTexto(char texto[], char subTextoBusqueda[], char subTextoReemplazo[]) {
    //TODO: Implementar
}
