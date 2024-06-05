#include <iostream>
#include <conio.h>
using namespace std;
/*
2_ Paso por referencia de un puntero: Crea una función que reciba un puntero a un entero y modifique el valor al que apunta.
*/
void modificarValor(int* ptr) {
    *ptr = 42;
}

int main() {
    int x = 10;

    cout << "Antes: " << x << endl;

    modificarValor(&x);

    cout << "Despues: " << x << endl;

    getch();
    return 0;
}
