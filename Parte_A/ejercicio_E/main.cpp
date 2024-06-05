#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

/*
Crear un procedimiento amigosDeMario que contenga un arreglo de personajes {Luigi, Donkey, Yoshi} y reciba un puntero pt a string*, nos muestre los personajes incrementando pt++.
*/

void amigosDeMario(string* pt) {
    const int numPersonajes = 3;
    for (int i = 0; i < numPersonajes; ++i) {
        // cout << *pt << endl;
        cout << *(pt++) << endl; // interesante jaja
    }
}

int main() {
    string personajes[] = {"Luigi", "Donkey", "Yoshi"};

    string* pt = personajes;

    amigosDeMario(pt);

    getch();
    return 0;
}
