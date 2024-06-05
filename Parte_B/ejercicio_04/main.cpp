#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

/*
Desde main declara un array de tamaño TAM, se llama a 
    A) proceso cargaArray con parámetros un vector de int, y su tamaño, 
    B) cambieSigno de los elementos del vector. 
    C) Otra función muestraArray a la consola.
*/

void cargaArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Introduce el valor para el elemento " << i + 1 << ": "; 
        cin >> arr[i];
    }
}

void cambieSigno(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if(arr[i]>0){
            arr[i] = -arr[i];
        }else{
            arr[i] = abs(arr[i]);
        }
    }
}

void muestraArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << arr[i] << endl;
    }
}

int main() {
    setlocale(LC_ALL, "spanish");
    int TAM;
    cout << "Ingresa el tamaño del arreglo: "; cin >> TAM;
    int arr[TAM];

    cargaArray(arr, TAM);
    cambieSigno(arr, TAM);
    muestraArray(arr, TAM);

    getch();
    return 0;
}
