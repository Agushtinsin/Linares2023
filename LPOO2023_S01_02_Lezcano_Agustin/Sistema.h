//
// Created by Agustin Lezcano on 29/03/23.
//

#ifndef INC_002_SISTEMA_H
#define INC_002_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    int numero;
    string paridad;
    vector<int> numerosFiltrados;
    bool validacion();
    string almacenarNumero();
    int cantidadNumeros();
    void filtrarNumeros();
private:
    vector<int> numeros;
};

#endif //INC_002_SISTEMA_H