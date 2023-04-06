#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

int main() {
    cout << "Bienvenido al programa de encriptacion de parrafos" << endl;
    Sistema osys;
    while (osys.validacion(osys.parrafo) != true) {
        cout << "Ingrese el parrafo a encriptar (de entre 10 y 255 caracteres en mayusculas): ";
        cin.getline(osys.parrafo,256);
        if (osys.validacion(osys.parrafo) == false) {
            cout << "El parrafo no cumple los requisitos" << endl;
        } else {
            cout << "El parrafo se ha ingresado correctamente" << endl;
        }
    }
    while (osys.validacion(osys.llave) != true) {
        cout << "Ingrese la llave de encriptacion (LETRA MAYUSCULA): ";
        cin >> osys.llave;
        if (osys.validacion(osys.llave) == false) {
            cout << "La llave no cumple los requisitos" << endl;
        } else {
            cout << "La llave se ha ingresado correctamente" << endl;
        }
    }
    osys.encriptarParrafo();
    cout << "El parrafo encriptado es: " << osys.parrafoEncriptado << endl;
    cout << "Gracias por utilizar el programa" << endl;
    return 0;
}