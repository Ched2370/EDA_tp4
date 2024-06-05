#include <iostream>
#include <conio.h>
using namespace std;

/*
Realice una función que reciba un número y devuelva el factorial del mismo. El factorial de 
un número: es el producto del número por todos sus antecesores hasta 1. Ejemplos:
▪ Factorial de 0 es 1 (por definición) Se denota 0!=1
▪ Factorial de 1 es 1 Se denota 1!=1
▪ Factorial de 4= 4*3*2*1 Se denota 4!=24
▪ Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800
*/

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }

    unsigned long long resultado = 1;

    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    cout << "Factorial de 0: " << factorial(0) << endl;
    cout << "Factorial de 1: " << factorial(1) << endl;
    cout << "Factorial de 4: " << factorial(4) << endl;
    cout << "Factorial de 10: " << factorial(10) << endl;

    getch();
    return 0;
}
