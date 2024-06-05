#include <iostream>
#include <conio.h>
using namespace std;

/*
Realice un programa que contenga las siguientes funciones o procedimientos según sea:

• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las 
diagonales de ambas.

Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 
matrices), muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).
*/

void cargaMatriz(float matriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Introduce el valor para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void muestraMatriz(float matriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }
}

void intercambioDiagonal(float matriz1[4][4], float matriz2[4][4]) {
    for (int i = 0; i < 4; ++i) {
        swap(matriz1[i][i], matriz2[i][i]);
        swap(matriz1[i][3 - i], matriz2[i][3 - i]);
    }
}

int main() {
    float matriz1[4][4];
    float matriz2[4][4];

    cout << "Carga de la primera matriz:" << endl;
    cargaMatriz(matriz1);

    cout << "Carga de la segunda matriz:" << endl;
    cargaMatriz(matriz2);

    cout << "\nPrimera matriz antes del intercambio:" << endl;
    muestraMatriz(matriz1);

    cout << "\nSegunda matriz antes del intercambio:" << endl;
    muestraMatriz(matriz2);

    intercambioDiagonal(matriz1, matriz2);

    cout << "\nPrimera matriz después del intercambio:" << endl;
    muestraMatriz(matriz1);

    cout << "\nSegunda matriz después del intercambio:" << endl;
    muestraMatriz(matriz2);

    getch();
    return 0;
}
