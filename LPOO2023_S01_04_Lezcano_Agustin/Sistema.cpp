//
// Created by Agustin Lezcano on 30/03/23.
//

#include <string>
#include <vector>
#include "Sistema.h"

bool Sistema::validacion() {
    bool resultado = false;
    if (palabra.length() >= 5 && palabra.length() <= 10) {
        for (int i = 0; i < palabra.length(); i++) {
            if (!isalpha(palabra[i])) {
                resultado = false;
                break;
            } else {
                resultado = true;
            }
        }
    }
    return resultado;
}

string Sistema::almacenarPalabras() {
    string retorno = "La palabra " + palabra + " se ha almacenado en la posicion " + to_string(cantidadPalabras());
    palabras.push_back(palabra);
    return retorno;
}

int Sistema::cantidadPalabras() {
    return palabras.size();
}

void Sistema::buscarPalabra() {
    if (modoBusqueda == "secuencial") {
        for (int i = 0; i < palabras.size(); i++) {
            if (palabras[i] == palabra) {
                mensaje = "La palabra se encuentra en la posicion " + to_string(i);
                break;
            } else {
                mensaje = "La palabra no se encuentra en el vector";
            }
        }
    } else if (modoBusqueda == "binaria") {
        vector<string> palabrasOrdenadas;
        palabrasOrdenadas = palabras;
        sort(palabrasOrdenadas.begin(), palabrasOrdenadas.end());
        int inicio = 0;
        int fin = palabrasOrdenadas.size() - 1;
        int medio = (inicio + fin) / 2;
        while (inicio <= fin) {
            if (palabrasOrdenadas[medio] == palabra) {
                mensaje = "La palabra se encuentra en la posicion " + to_string(medio) +
                          " del vector ordenado alfabeticamente";
                break;
            } else if (palabrasOrdenadas[medio] < palabra) {
                inicio = medio + 1;
            } else {
                fin = medio - 1;
            }
            medio = (inicio + fin) / 2;
        }
        if (inicio > fin) {
            mensaje = "La palabra no se encuentra en el vector";
        }
    }
}