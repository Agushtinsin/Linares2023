//
// Created by Agustin Lezcano on 30/03/23.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

int main() {
    Sistema osys;
    cout << "Bienvenido al programa" << endl;
    while (osys.cantidadPalabras() < 10) {
        cout << "Ingrese una palabra de entre 5 y 10 caracteres alfabeticos: ";
        cin >> osys.palabra;
        if (osys.validacion()) {
            cout << osys.almacenarPalabras() << endl;
        } else {
            cout << "La palabra ingresada no cumple con las condiciones" << endl;
        }
    }
    while (osys.palabra != "FIN") {
        cout << "Ingrese una palabra para buscar  ('FIN' para salir del programa): ";
        cin.ignore();
        cin >> osys.palabra;
        if (osys.validacion()) {
            cout << "Ingrese el modo de busqueda: 'secuencial', 'binaria': ";
            cin >> osys.modoBusqueda;
            osys.buscarPalabra();
            cout << osys.mensaje << endl;
        } else {
            if (osys.palabra != "FIN") {
                cout << "La palabra ingresada no cumple con las condiciones" << endl;
            }
        }
    }
    cout << "Gracias por usar el aplicativo" << endl;
    return 0;
}