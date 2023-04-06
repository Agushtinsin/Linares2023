//
// Created by Agustin Lezcano on 29/03/23.
//

#ifndef INC_003_SISTEMA_H
#define INC_003_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    int numero;
    string orden;
    vector<int> numerosOrdenados;
    bool validacion();
    string almacenarNumero();
    void ordenarNumeros();
    int cantidadNumeros();
private:
    vector<int>numeros;
};
#endif //INC_003_SISTEMA_H