//
// Created by Agustin Lezcano on 30/03/23.
//

#ifndef INC_004_SISTEMA_H
#define INC_004_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    string palabra;
    string modoBusqueda;
    string mensaje;
    bool validacion();
    string almacenarPalabras();
    int cantidadPalabras();
    void buscarPalabra();
private:
    vector<string> palabras;
};

#endif //INC_004_SISTEMA_H