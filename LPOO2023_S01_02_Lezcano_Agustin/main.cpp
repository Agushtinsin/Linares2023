//
// Created by Agustin Lezcano on 29/03/23.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

int main() {
    cout << "Bienvenido al programa!" << endl;
    Sistema osys;
    while (osys.cantidadNumeros() < 5) {
        cout << "Ingrese un numero entero en un rango entre 1 y 1000: ";
        cin >> osys.numero;
        if (osys.validacion()) {
            cout << osys.almacenarNumero() << endl;
        } else {
            cout << "El numero ingresado no es valido, intente nuevamente." << endl;
        }
    }
    cout << "Ingrese la paridad de los numeros que desea filtrar (escribir 'par' o 'impar'): ";
    cin >> osys.paridad;
    osys.filtrarNumeros();
    cout << "Los numeros " + osys.paridad + "es son: " << endl;
    for (int i = 0; i < osys.numerosFiltrados.size(); i++) {
        cout << osys.numerosFiltrados[i] << endl;
    }
    return 1;
}