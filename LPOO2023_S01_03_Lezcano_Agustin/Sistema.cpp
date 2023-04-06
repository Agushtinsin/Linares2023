//
// Created by Agustin Lezcano on 29/03/23.
//

#include "Sistema.h"
#include <string>
#include <vector>

bool Sistema::validacion() {
    bool resultado = false;
    if (numero > 0 && numero < 1000) {
        resultado = true;
    }
    return resultado;
}

string Sistema::almacenarNumero() {
    numeros.push_back(numero);
    return "El numero " + to_string(numero) + " ha sido almacenado.";
}

void Sistema::ordenarNumeros() {
    if (orden == "ascendente") {
        for (int i = 0; i < numeros.size() - 1;i++) {
            for (int j = 0; j < numeros.size()-i-1;j++) {
                if (numeros[j] > numeros[j+1]) {
                    int aux = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = aux;
                }
            }
        }
    } else if (orden == "descendiente") {
        for (int i = 0; i < numeros.size() - 1;i++) {
            for (int j = 0; j < numeros.size()-i-1;j++) {
                if (numeros[j] < numeros[j+1]) {
                    int aux = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = aux;
                }
            }
        }
    }
    numerosOrdenados = numeros;
}

int Sistema::cantidadNumeros() {
    return numeros.size();
}