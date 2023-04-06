//
// Created by Agustin Lezcano on 29/03/23.
//

#include <string>
#include <vector>
#include "Sistema.h"

using namespace std;

bool Sistema::validacion() {
    bool resultado = false;
    if (numero > 0 && numero <= 1000) {
        resultado = true;
    }
    return resultado;
}

string Sistema::almacenarNumero() {
    numeros.push_back(numero);
    return "El numero " + to_string(numero) + " ha sido almacenado.";
}

int Sistema::cantidadNumeros() {
    return numeros.size();
}

void Sistema::filtrarNumeros() {
    for (int i = 0; i < cantidadNumeros(); i++) {
        if (paridad == "par") {
            if (numeros[i] % 2 == 0) {
                numerosFiltrados.push_back(numeros[i]);
            }
        } else if (paridad == "impar") {
            if (numeros[i] % 2 != 0) {
                numerosFiltrados.push_back(numeros[i]);
            }
        }
    }
}