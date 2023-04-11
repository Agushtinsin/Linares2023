//
// Created by Agustin Lezcano on 04/04/2023.
//

#include <iostream>
#include <string>
#include "Sistema.h"

using namespace std;

int main() {
    Sistema osys;
    bool ejecutar = true;
    cout << "Bienvenido al programa" << endl;
    while (ejecutar == true) {
        cout << "----------------------------------------" << endl;
        cout << "1. Ingresar numeros" << endl;
        cout << "2. Ingresar palabras" << endl;
        cout << "3. Ordenar lista" << endl;
        cout << "4. Buscar en lista" << endl;
        cout << "5. Salir" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Ingrese una opcion: ";
        int opcion;
        cin >> opcion;
        switch (opcion) {
            // Ingreso de numeros
            case 1:
                while (osys.cantidad(osys.numeros) < 5) {
                    cout << "Ingrese un numero positivo, de entre 1 y 1000: ";
                    cin >> osys.numero;
                    if (osys.validacion(osys.numero) == true) {
                        cout << osys.almacenar(osys.numero) << endl;
                    } else {
                        cout << "Numero invalido" << endl;
                    }
                }
                break;
            // Ingreso de palabras
            case 2:
                while (osys.cantidad(osys.palabras) < 5) {
                    cout << "Ingrese una palabra de entre 3 y 10 caracteres alfabeticos en mayusculas: ";
                    cin >> osys.palabra;
                    if (osys.validacion(osys.palabra) == true) {
                        cout << osys.almacenar(osys.palabra) << endl;
                    } else {
                        cout << "Palabra invalida" << endl;
                    }
                }
                break;
            // Ordenar en lista
            case 3:
                cout << "Ingrese la lista a ordenar" << endl;
                cout << "1. Numeros" << endl;
                cout << "2. Palabras" << endl;
                cout << "Ingrese una opcion: ";
                int opcionOrdenar;
                cin >> opcionOrdenar;
                cout << "Ingrese el modo de ordenamiento" << endl;
                cout << "1. Ascendente" << endl;
                cout << "2. Descendente" << endl;
                cout << "Ingrese una opcion: ";
                int opcionOrdenamiento;
                cin >> opcionOrdenamiento;
                if (opcionOrdenar == 1) {
                    if (osys.cantidad(osys.numeros) == 5) {
                        if (opcionOrdenamiento == 1) {
                            osys.modoOrdenamiento = "ascendente";
                            cout << "Lista de numeros ordenada de forma ascendente: " << endl;
                            for (int i = 0; i < osys.ordenar(osys.numeros, osys.modoOrdenamiento).size(); i++) {
                                cout << osys.ordenar(osys.numeros, osys.modoOrdenamiento)[i] << endl;
                            }
                        } else if (opcionOrdenamiento == 2) {
                            osys.modoOrdenamiento = "descendente";
                            cout << "Lista de numeros ordenada de forma descendente: " << endl;
                            for (int i = 0; i < osys.ordenar(osys.numeros, osys.modoOrdenamiento).size(); i++) {
                                cout << osys.ordenar(osys.numeros, osys.modoOrdenamiento)[i] << endl;
                            }
                        } else {
                            cout << "Opcion invalida" << endl;
                        }
                    } else {
                        cout << "No hay numeros ingresados en la lista" << endl;
                    }
                } else if (opcionOrdenar == 2) {
                    if (osys.cantidad(osys.palabras) == 5) {
                        if (opcionOrdenamiento == 1) {
                            osys.modoOrdenamiento = "ascendente";
                            cout << "Lista de palabras ordenada de forma ascendente: " << endl;
                            for (int i = 0; i < osys.ordenar(osys.palabras, osys.modoOrdenamiento).size(); i++) {
                                cout << osys.ordenar(osys.palabras, osys.modoOrdenamiento)[i] << endl;
                            }
                        } else if (opcionOrdenamiento == 2) {
                            osys.modoOrdenamiento = "descendente";
                            cout << "Lista de palabras ordenada de forma descendente: " << endl;
                            for (int i = 0; i < osys.ordenar(osys.palabras, osys.modoOrdenamiento).size(); i++) {
                                cout << osys.ordenar(osys.palabras, osys.modoOrdenamiento)[i] << endl;
                            }
                        } else {
                            cout << "Opcion invalida" << endl;
                        }
                    } else {
                        cout << "No hay palabras ingresadas en la lista" << endl;
                    }
                } else {
                    cout << "Opcion invalida" << endl;
                }
                break;
            // Busqueda en lista
            case 4:
                cout << "Ingrese la lista a buscar" << endl;
                cout << "1. Numeros" << endl;
                cout << "2. Palabras" << endl;
                cout << "Ingrese una opcion: ";
                int opcionBuscar;
                cin >> opcionBuscar;
                cout << "Ingrese el modo de busqueda" << endl;
                cout << "1. Secuencial" << endl;
                cout << "2. Binaria" << endl;
                cout << "Ingrese una opcion: ";
                int opcionBusqueda;
                cin >> opcionBusqueda;
                if (opcionBuscar == 1) {
                    if (osys.cantidad(osys.numeros) == 5) {
                        if (opcionBusqueda == 1) {
                            osys.modoBusqueda = "secuencial";
                            cout << "Ingrese el numero a buscar: ";
                            cin >> osys.numero;
                            if (osys.validacion(osys.numero) == true) {
                                cout << osys.buscar(osys.numeros, osys.numero, osys.modoBusqueda) << endl;
                            } else {
                                cout << "Numero invalido" << endl;
                            }
                        } else if (opcionBusqueda == 2) {
                            osys.modoBusqueda = "binaria";
                            cout << "Ingrese el numero a buscar: ";
                            cin >> osys.numero;
                            if (osys.validacion(osys.numero) == true) {
                                cout << osys.buscar(osys.numeros, osys.numero, osys.modoBusqueda) << endl;
                            } else {
                                cout << "Numero invalido" << endl;
                            }
                        } else {
                            cout << "Opcion invalida" << endl;
                        }
                    } else {
                        cout << "No hay numeros ingresados en la lista" << endl;
                    }
                } else if (opcionBuscar == 2) {
                    if (osys.cantidad(osys.palabras) == 5) {
                        if (opcionBusqueda == 1) {
                            osys.modoBusqueda = "secuencial";
                            cout << "Ingrese la palabra a buscar: ";
                            cin >> osys.palabra;
                            if (osys.validacion(osys.palabra) == true) {
                                cout << osys.buscar(osys.palabras, osys.palabra, osys.modoBusqueda) << endl;
                            } else {
                                cout << "Palabra invalida" << endl;
                            }
                        } else if (opcionBusqueda == 2) {

                            osys.modoBusqueda = "binaria";
                            cout << "Ingrese la palabra a buscar: ";

                            cin >> osys.palabra;
                            if (osys.validacion(osys.palabra) == true) {
                                cout << osys.buscar(osys.palabras, osys.palabra, osys.modoBusqueda) << endl;
                            } else {
                                cout << "Palabra invalida" << endl;
                            }
                        } else {
                            cout << "Opcion invalida" << endl;
                        }
                    } else {
                        cout << "No hay palabras ingresadas en la lista" << endl;
                    }
                } else {
                    cout << "Opcion invalida" << endl;
                }
                break;
            // Salir
            case 5:
                cout << "Gracias por usar el programa" << endl;
                ejecutar = false;
                break;
            // Opcion invalida
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    }
    return 0;
}