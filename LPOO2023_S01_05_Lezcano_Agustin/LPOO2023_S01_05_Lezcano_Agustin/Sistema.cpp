//
// Created by Agustin Lezcano on 30/03/23.
//

#include <vector>
#include "Sistema.h"

using namespace std;

bool Sistema::validacion(char caracter) {
    bool resultado = false;
    if (caracter >= 'A' && caracter <= 'Z') {
        resultado = true;
    }
    return resultado;
}

bool Sistema::validacion(char* cadenaCaracteres) {
    bool resultado = true;
    int longitud = strlen(cadenaCaracteres);

    if (longitud >= 10 && longitud <= 255) {
        for (int i = 0; i < longitud; i++) {
            if ((cadenaCaracteres[i] < 'A' || cadenaCaracteres[i] > 'Z') && cadenaCaracteres[i] != ' ') {
                resultado = false;
                break;
            }
        }
    } else {
        resultado = false;
    }

    return resultado;
}

void Sistema::encriptarParrafo() {
    for (int i = 0; i < strlen(parrafo); i++) {
        if (parrafo[i] + llave > 'Z') {
            parrafoEncriptado += parrafo[i] + llave - 26;
        } else {
            parrafoEncriptado += parrafo[i] + llave;
        }
    }
}