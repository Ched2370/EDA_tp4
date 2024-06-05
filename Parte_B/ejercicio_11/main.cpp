#include <iostream>
#include <string.h>
#include <locale.h>
#include <conio.h>
using namespace std;

/*
Cree una estructura Persona que tenga un array de 30 caracteres, y su edad. Precargue en el 
main, una variable de tipo Persona, y use una función pedirDatos(Persona &) que la cargue; 
use getline para cargar el nombre. Otra función cumpleanios(Persona*) aumenta la edad, y 
mostrarDatos(Persona) que reciba la estructura y la muestre. Declare el prototipo de las 
funciones pedirDatos, cumpleanios y mostrarDatos. Pruébelas desde función main.
*/

struct Persona {
    char nombre[30];
    int edad;
};

void pedirDatos(Persona &p);
void cumpleanios(Persona *p);
void mostrarDatos(Persona &p);

int main() {
    setlocale(LC_ALL, "spanih");
    Persona persona = {"", 0};

    pedirDatos(persona);
    mostrarDatos(persona);
    cout << endl;

    cumpleanios(&persona);
    cout << "Despues de cumplir años:" << endl;
    mostrarDatos(persona);

    getch();
    return 0;
}

void pedirDatos(Persona &p) {
    
    cout << "Introduce el nombre: "; cin.getline(p.nombre, 30);
    cout << "Introduce la edad: "; cin >> p.edad;
}

void cumpleanios(Persona *p) {
    p->edad += 1;
}

void mostrarDatos(Persona &p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}
