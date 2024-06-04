#include <iostream>
#include <conio.h>
using namespace std;
/*
3_ Hacer una función que reciba un puntero y compruebe si el número es par o impar, y señalar la posición de memoria donde se está guardando el número.
*/

void comprobarParidad(int* ptr) {
    if (ptr == nullptr) { //nullptr controla si el puntero es null
        cout << "El puntero es nulo" << endl;
        return;
    }

    if (*ptr % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    cout << "La direccion de memoria del numero es: " << ptr << endl;
}

int main() {

    int x = 20;

    cout << "x: " << x << endl; 
    comprobarParidad(&x);

    getch();
    return 0;
}
