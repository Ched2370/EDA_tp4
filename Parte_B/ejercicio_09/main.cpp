#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
using namespace std;

/*
Realice un programa permita elegir entre contar palabras de una frase y contar la 
ocurrencia de una palabra en la frase, mientras el usuario lo desee. Para ello valerse 
de lo siguiente:
    • Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
    • Otra función que determine cuantas veces se encuentra una palabra en una frase.
*/

int contarPalabras(string &frase) {
    stringstream ss(frase);
    string palabra;
    int cuenta = 0;
    while (ss >> palabra) { // es como el cin
        ++cuenta;
    }
    return cuenta;
}

int contarOcurrencias(string &frase, const string &palabraBuscada) {
    stringstream ss(frase);
    string palabra;
    int cuenta = 0;
    while (ss >> palabra) {
        if (palabra == palabraBuscada) {
            ++cuenta;
        }
    }
    return cuenta;
}

int main() {
    string frase;
    string palabra;
    int opcion;
    char continuar;

    do {
        cout << "Introduce una frase: ";
        getline(cin, frase);

        cout << "Elige una opcion:" << endl;
        cout << "1. Contar las palabras de la frase" << endl;
        cout << "2. Contar la ocurrencia de una palabra en la frase" << endl;
        cout << "Opcion: "; cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "La frase tiene " << contarPalabras(frase) << " palabras." << endl;
                break;
            case 2:
                cout << "Introduce la palabra a buscar: ";
                cin >> palabra;
                cout << "La palabra \"" << palabra << "\" aparece " << contarOcurrencias(frase, palabra) << " veces en la frase." << endl;
                break;
            default:
                cout << "Opción no valida." << endl;
        }

        cout << "Desea realizar otra operacion? (S/N): "; cin >> continuar;
        cin.ignore();
        cout << endl;
    } while (continuar == 'S' || continuar == 's');

    getch();
    return 0;
}
