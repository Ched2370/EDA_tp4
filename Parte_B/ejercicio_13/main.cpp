#include <iostream>
#include <conio.h>
using namespace std;

/*
Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una 
potencia en número entero positivo y despliegue el resultado. El número entero positivo 
deberá ser el segundo valor transmitido a la función.
*/

void funpot(int base, int exponente);

int main() {
    int base, exponente;

    cout << "Introduce el numero base: "; cin >> base;
    cout << "Introduce el exponente (entero positivo): "; cin >> exponente;

    if (exponente < 0) {
        cout << "El exponente debe ser un numero entero positivo." << endl;
    } else {
        funpot(base, exponente);
    }

    getch();
    return 0;
}

void funpot(int base, int exponente) {
    int resultado = 1;

    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }

    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
}
