#include <iostream>
#include <conio.h>
using namespace std;

/*
Realice una función que, dada una matriz y un número de fila de la matriz, devuelva con la 
función masPeque, el menor de los elementos almacenados en dicha fila al main. masPeque 
llama en el if a la función filaValida.
*/

const int FILAS = 4;
const int COLUMNAS = 4;

bool filaValida(int fila);
int masPeque(int matriz[FILAS][COLUMNAS], int fila);
void cargaMatriz(int matriz[FILAS][COLUMNAS]);
void muestraMatriz(int matriz[FILAS][COLUMNAS]);

int main() {
    int matriz[FILAS][COLUMNAS];

    cout << "Introduce los elementos de la matriz 4x4:" << endl;
    cargaMatriz(matriz);
    cout << endl;

    cout << "\nMatriz introducida:" << endl;
    muestraMatriz(matriz);
    cout << endl;

    int fila;
    cout << "\nIntroduce el numero de fila (0 a 3) para encontrar el menor elemento: "; cin >> fila;

    if (filaValida(fila)) {
        int menor = masPeque(matriz, fila);
        cout << "El menor elemento de la fila " << fila << " es: " << menor << endl;
    } else {
        cout << "Numero de fila no valido." << endl;
    }

    getch();
    return 0;
}

bool filaValida(int fila) {
    return fila >= 0 && fila < FILAS;
}

int masPeque(int matriz[FILAS][COLUMNAS], int fila) {
    if (!filaValida(fila)) {
        cerr << "Fila no válida." << endl;
        return -1;
    }

    int menor = matriz[fila][0];
    for (int i = 1; i < COLUMNAS; ++i) {
        if (matriz[fila][i] < menor) {
            menor = matriz[fila][i];
        }
    }
    return menor;
}

void cargaMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Introduce el valor para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void muestraMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }
}
