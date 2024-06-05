#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

/*
Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que 
determina si un número es primo, debe recibir el número y retornar verdadero o falso.

- Realice un programa que, de 2 opciones, 
1). Determinar si un número es primo 
2). Calcular todos los números primos menores a un número ingresado por el usuario. El usuario debe poder realizar estas opciones todas las veces que desee.
*/

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void primosMenores(int limite) {
    cout << "Numeros primos menores que " << limite << ":" << endl;
    for (int i = 2; i < limite; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    char opcion;
    int numero;

    do {
        // Mostrar el menú de opciones
        cout << "Elige una opcion:" << endl;
        cout << "1. Determinar si un numero es primo" << endl;
        cout << "2. Calcular todos los numeros primos menores a un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        switch (opcion) {
            case '1':
                cout << "Introduce un numero: ";
                cin >> numero;
                if (esPrimo(numero)) {
                    cout << numero << " es primo." << endl;
                } else {
                    cout << numero << " no es primo." << endl;
                }
                break;
            case '2':
                cout << "Introduce un numero limite: "; cin >> numero;
                primosMenores(numero);
                break;
            case '3':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no válida. Intentalo de nuevo." << endl;
        }
    } while (opcion != '3');

    getch();
    return 0;
}
