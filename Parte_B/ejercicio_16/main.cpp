#include <iostream>
#include <conio.h>
using namespace std;

/*
Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones, 
llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación 
por sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando 
nxm =n+n+…(m veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la 
cantidad de veces que pude restar 2 al 10. Y C. Calcule la potencia por multiplicaciones 
sucesivas Ej 2 3= 2*2*2 (multiplica 2 por si mismo 3 veces)
*/

int multiplicacionPorSumas(int a, int b);
int divisionPorRestas(int a, int b);
int potenciaPorMultiplicaciones(int base, int exponente);

int main() {
    char opcion;

    do {
        cout << "Elige una operacion:" << endl;
        cout << "A. Multiplicacion por sumas sucesivas" << endl;
        cout << "B. División por restas sucesivas" << endl;
        cout << "C. Potencia por multiplicaciones sucesivas" << endl;
        cout << "D. Salir" << endl;
        cout << "Opción: "; cin >> opcion;

        int a, b, resultado;

        switch (opcion) {
            case 'A':
            case 'a':
                cout << "Introduce el primer numero: "; cin >> a;
                cout << "Introduce el segundo numero: "; cin >> b;
                resultado = multiplicacionPorSumas(a, b);
                cout << "El resultado de la multiplicacion es: " << resultado << endl;
                break;
            case 'B':
            case 'b':
                cout << "Introduce el dividendo: "; cin >> a;
                cout << "Introduce el divisor: "; cin >> b;
                resultado = divisionPorRestas(a, b);
                cout << "El resultado de la division es: " << resultado << endl;
                break;
            case 'C':
            case 'c':
                cout << "Introduce la base: "; cin >> a;
                cout << "Introduce el exponente: "; cin >> b;
                resultado = potenciaPorMultiplicaciones(a, b);
                cout << "El resultado de la potencia es: " << resultado << endl;
                break;
            case 'D':
            case 'd':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 'D' && opcion != 'd');

    getch();
    return 0;
}

int multiplicacionPorSumas(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; ++i) {
        resultado += a;
    }
    return resultado;
}

int divisionPorRestas(int a, int b) {
    int contador = 0;
    while (a >= b) {
        a -= b;
        contador++;
    }
    return contador;
}

int potenciaPorMultiplicaciones(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}
