#include <iostream>
#include <conio.h>
using namespace std;

/*
Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se 
transmitan a la función cuando sea llamada. Suponga que los 3 argumentos serán del tipo 
float.
*/

float maximo(float num1, float num2, float num3);

int main() {
    float a, b, c;

    cout << "Introduce el primer numero: "; cin >> a;
    cout << "Introduce el segundo numero: "; cin >> b;
    cout << "Introduce el tercer numero: "; cin >> c;

    float max = maximo(a, b, c);
    cout << "El valor maximo de los tres numeros es: " << max << endl;

    return 0;
}

float maximo(float num1, float num2, float num3) {
    float max = num1;

    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    return max;
}
