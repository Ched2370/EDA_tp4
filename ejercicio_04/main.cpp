#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

/*
La función Hogwarts recibirá un puntero a cadena “hechizo”, y muestra por pantalla cuantas vocales y consonantes tiene. Teste con ‘Expelliarmus’, nos muestra: 5 vocales, 7 consonantes. Ej2. ‘Alohomora’
*/

bool esVocal(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A');
    }
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool esLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void Hogwarts(const char* hechizo) {
    int vocales = 0;
    int consonantes = 0;
    int longitud = strlen(hechizo);

    for (int i = 0; i < longitud; ++i) {
        if (esLetra(hechizo[i])) {
            if (esVocal(hechizo[i])) {
                ++vocales;
            } else {
                ++consonantes;
            }
        }
    }

    std::cout << "El hechizo '" << hechizo << "' tiene " << vocales << " vocales y " << consonantes << " consonantes." << std::endl;
}

int main() {
    Hogwarts("Expelliarmus");
    Hogwarts("Alohomora");

    getch();
    return 0;
}
