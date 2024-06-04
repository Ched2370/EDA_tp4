#include <iostream>
#include <conio.h>
using namespace std;

/*
1_ Intercambio de valores: Crea una función que reciba dos punteros a enteros y los intercambie.
*/

void intercambiar(int* a, int* b) {
    int aux = *a; 
    *a = *b;      
    *b = aux;    
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Valores antes de intercambiar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    intercambiar(&x, &y);

    cout << "Valores luego de intercambiar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    getch();
    return 0;
}
