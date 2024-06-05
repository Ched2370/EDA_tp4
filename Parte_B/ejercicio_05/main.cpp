#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

/*
El programa main debe recibir un array y sumar sus elementos pares, reutilizar las funciones
A y C del punto 4 para cargar y mostrar los arrays. Escriba otra función que reciba un array
y sume sus elementos pares.
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

int sumaElementosPares(const int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            suma += arr[i];
        }
    }
    return suma;
}


int main() {
    setlocale(LC_ALL, "spanish");
    int TAM;
    cout << "Ingresa el tamaño del arreglo: "; cin >> TAM;
    int arr[TAM];

    cargaArray(arr, TAM);
    //cambieSigno(arr, TAM);
    muestraArray(arr, TAM);
    int sumaPares = sumaElementosPares(arr, TAM);
    cout << "La suma de los elementos pares es: " << sumaPares << endl;

    getch();
    return 0;
}
