//
// Created by Agustin Lezcano on 02/04/2023.
//

#include <string>
#include "Sistema.h"

using namespace std;

bool Sistema::validacion() {
    if (numero % 2 == 0 && numero >= 1 && numero <= 99) {
        return true;
    } else {
        return false;
    }
}

string Sistema::almacenarNumero() {
    string mensaje = "Numero almacenado correctamente";
    numeros.push_back(numero);
    return mensaje;
}

void Sistema::convertirNumero() {
    numero = numeros[indiceNumero - 1];
    int residuo;
    string numero_convertido = "";

    if (conversion == "binario") {
        while (numero > 0) {
            residuo = numero % 2;
            numero = numero / 2;
            numero_convertido = to_string(residuo) + numero_convertido;
        }
    } else if (conversion == "octal") {
        while (numero > 0) {
            residuo = numero % 8;
            numero = numero / 8;
            numero_convertido = to_string(residuo) + numero_convertido;
        }
    }

    resultado = numero_convertido;
}