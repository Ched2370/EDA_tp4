#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
/*
En este ejemplo, tenemos una estructura Abuela que contiene un nombre, edad, y hobby. La 
función modificarAbuela recibe una referencia(&) a una estructura Abuela, y cambia nombre, 
edad, y hobby (tejer, amasar, bordar). En la función main, creamos una instancia de Abuela 
llamada abue1 con su nombre, edad, y hobby inicial. Luego, imprimimos los valores 
originales. Después, llamamos a la función modificarAbuela (Abuela* abue1) pasando por 
puntero. Esto significa que los cambios realizados dentro de la función afectarán 
directamente a la estructura original. Finalmente, imprimir los valores de abue1 después de 
la modificación para mostrar que los cambios han sido aplicados.
*/
struct Abuela {
    string nombre;
    int edad;
    string hobby;
};

void modificarAbuela(Abuela* abue) {
    abue->nombre = "Maria";
    abue->edad = 70;
    abue->hobby = "La timbaaaa";
}

void imprimirAbuela(const Abuela& abue) {
    cout << "Nombre: " << abue.nombre << endl;
    cout << "Edad: " << abue.edad << endl;
    cout << "Hobby: " << abue.hobby << endl;
}

int main() {

    Abuela abue1 = {"Ana", 65, "cocinar"};

    cout << "Valores originales de abue1:" << endl;
    imprimirAbuela(abue1);
    cout << endl;

    modificarAbuela(&abue1);

    cout << "Valores modificados de abue1:" << endl;
    imprimirAbuela(abue1);

    getch();
    return 0;
}
