#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
Declare struct Fecha, declare en función main variables FA(fecha actual), y FC(fecha 
cumple), luego se compruebe en función esMiCumple(struct* fecha, struct* cumple) si 
corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así. 
Cargar las struct por referencia, es decir cargarFecha(struct &fecha).
*/

struct Fecha {
    int dia;
    int mes;
    int anio;
};

void cargarFecha(Fecha &fecha) {
    cout << "Introduce el dia: "; cin >> fecha.dia;
    cout << "Introduce el mes: "; cin >> fecha.mes;
    cout << "Introduce el año: "; cin >> fecha.anio;
}

bool esMiCumple(const Fecha &fecha, const Fecha &cumple) {
    return (fecha.dia == cumple.dia && fecha.mes == cumple.mes);
}

int main() {
    setlocale(LC_ALL, "spanish");

    Fecha FA;
    Fecha FC;

    cout << "Indica la fecha actual:" << endl;
    cargarFecha(FA);
    cout << endl;
    
    cout << "Indica la fecha de tu cumpleaños:" << endl;
    cargarFecha(FC);

    if (esMiCumple(FA, FC)) {
        cout << "Feliz cumpleaños!" << endl;
    } else {
        cout << "Hoy no es tu cumpleaños." << endl;
    }

    getch();
    return 0;
}
