//
// Created by Agustin Lezcano on 02/04/2023.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

int main() {
    Sistema osys;
    bool salir = false;
    cout << "Bienvenido al programa" << endl;
    while (salir != true) {
        cout << "--------------------------------" << endl;
        cout << "Seleccione una opcion" << endl;
        cout << "1. Ingresar numeros" << endl;
        cout << "2. Ver numeros" << endl;
        cout << "3. Convertir numero" << endl;
        cout << "4. Salir" << endl;

        int opcionMenu;
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                while (osys.numeros.size() < 5) {
                    cout << "Ingrese un numero entero par entre 1 y 99" << endl;
                    cin >> osys.numero;
                    if (osys.validacion()) {
                        osys.almacenarNumero();
                    } else {
                        cout << "El numero ingresado no cumple con los requisitos" << endl;
                    }
                }
                break;
            case 2:
                if (osys.numeros.size() == 0) {
                    cout << "No hay numeros ingresados" << endl;
                    break;
                } else {
                    cout << "Los numeros ingresados son: " << endl;
                    for (int i = 0; i < osys.numeros.size(); i++) {
                        cout << osys.numeros[i] << endl;
                    }
                }
                break;
            case 3:
                if (osys.numeros.size() == 0) {
                    cout << "No hay numeros ingresados" << endl;
                } else {
                    for (int i = 0; i < osys.numeros.size(); i++) {
                        cout << i + 1 << ". " << osys.numeros[i] << endl;
                    }
                    cout << "Ingrese el numero que desea convertir" << endl;
                    cin >> osys.indiceNumero;
                    cout << "1. Convertir a Binario (Base 2)" << endl;
                    cout << "2. Convertir a Octal (Base 8)" << endl;
                    int opcionConversion;
                    cin >> opcionConversion;
                    switch (opcionConversion) {
                        case 1:
                            osys.conversion = "binario";
                            osys.convertirNumero();
                            cout << "El numero " << osys.numeros[osys.indiceNumero - 1] << " en " << osys.conversion
                                 << " es: " << osys.resultado << endl;
                            break;
                        case 2:
                            osys.conversion = "octal";
                            osys.convertirNumero();
                            cout << "El numero " << osys.numeros[osys.indiceNumero - 1] << " en " << osys.conversion
                                 << " es: " << osys.resultado << endl;
                            break;
                        default:
                            cout << "Opcion invalida" << endl;
                            break;
                    }
                }
                break;
            case 4:
                cout << "Gracias por usar el programa" << endl;
                salir = true;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    }

    return 0;
}