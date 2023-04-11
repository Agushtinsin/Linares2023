//
// Created by Agustin Lezcano on 02/04/2023.
//

#ifndef INC_006_SISTEMA_H
#define INC_006_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    int numero;
    vector<int> numeros;
    string resultado;
    string conversion;
    int indiceNumero;
    bool validacion();
    string almacenarNumero();
    void convertirNumero();
};

#endif //INC_006_SISTEMA_H