#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

/*
Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido 
por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 
0.879.
*/

int main() {
    double numero, parteFraccionaria, parteEntera; // float daba un numero con mas decimales

    cout << "Introduce un numero real: "; cin >> numero;

    parteFraccionaria = modf(numero, &parteEntera);

    cout << "La parte fraccionaria de " << numero << " es: " << parteFraccionaria << endl;

    getch();
    return 0;
}
