//
// Created by Agustin Lezcano on 30/03/23.
//

#ifndef INC_005_SISTEMA_H
#define INC_005_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    char parrafo[256];
    char llave;
    string parrafoEncriptado;
    bool validacion(char caracter);
    bool validacion(char* cadenaCaracteres);
    void encriptarParrafo();
};

#endif //INC_005_SISTEMA_H