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
    while (osys.cantidadNumeros() < 10) {
        cout << "Ingrese un numero entero en un rango entre 1 y 1000: ";
        cin >> osys.numero;
        if (osys.validacion()) {
            cout << osys.almacenarNumero() << endl;
        } else {
            cout << "El numero ingresado no es valido, intente nuevamente." << endl;
        }
    }
    cout << "Ingrese el orden en el que quiere que los numeros sean mostrados (escribir 'ascendente' o 'descendiente'): ";
    cin >> osys.orden;
    osys.ordenarNumeros();
    cout << "Los numeros en orden " + osys.orden + " son: " << endl;
    for (int i = 0; i < osys.numerosOrdenados.size(); i++) {
        cout << osys.numerosOrdenados[i] << endl;
    }
    return 1;
}