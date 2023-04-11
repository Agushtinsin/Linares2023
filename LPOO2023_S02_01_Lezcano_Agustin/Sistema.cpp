//
// Created by Agustin Lezcano on 04/04/2023.
//

#include <string>
#include <vector>
#include "Sistema.h"
#include <algorithm>

using namespace std;

bool Sistema::validacion(int numero) {
    if (numero > 0 && numero < 1000) {
        return true;
    } else {
        return false;
    }
}

bool Sistema::validacion(string palabra) {
    if (palabra.length() > 2 && palabra.length() < 11) {
        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] < 65 || palabra[i] > 90) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

string Sistema::almacenar(int numero) {
    numeros.push_back(numero);
    return "Numero almacenado";
}

string Sistema::almacenar(string palabra) {
    palabras.push_back(palabra);
    return "Palabra almacenada";
}

int Sistema::cantidad(vector<int> numeros) {
    return numeros.size();
}

int Sistema::cantidad(vector<string> palabras) {
    return palabras.size();
}

vector<int> Sistema::ordenar(vector<int> numeros, string modoOrdenamiento) {
    vector<int> numerosOrdenados = numeros;
    if (modoOrdenamiento == "ascendente") {
        for (int i = 0; i < numerosOrdenados.size(); i++) {
            for (int j = 0; j < numerosOrdenados.size() - 1; j++) {
                if (numerosOrdenados[j] > numerosOrdenados[j + 1]) {
                    int aux = numerosOrdenados[j];
                    numerosOrdenados[j] = numerosOrdenados[j + 1];
                    numerosOrdenados[j + 1] = aux;
                }
            }
        }
    } else if (modoOrdenamiento == "descendente") {
        for (int i = 0; i < numerosOrdenados.size(); i++) {
            for (int j = 0; j < numerosOrdenados.size() - 1; j++) {
                if (numerosOrdenados[j] < numerosOrdenados[j + 1]) {
                    int aux = numerosOrdenados[j];
                    numerosOrdenados[j] = numerosOrdenados[j + 1];
                    numerosOrdenados[j + 1] = aux;
                }
            }
        }
    }
    return numerosOrdenados;
}

vector<string> Sistema::ordenar(vector<string> palabras, string modoOrdenamiento) {
    vector<string> palabrasOrdenadas = palabras;
    if (modoOrdenamiento == "ascendente") {
        for (int i = 0; i < palabrasOrdenadas.size(); i++) {
            for (int j = 0; j < palabrasOrdenadas.size() - 1; j++) {
                if (palabrasOrdenadas[j] > palabrasOrdenadas[j + 1]) {
                    string aux = palabrasOrdenadas[j];
                    palabrasOrdenadas[j] = palabrasOrdenadas[j + 1];
                    palabrasOrdenadas[j + 1] = aux;
                }
            }
        }
    } else if (modoOrdenamiento == "descendente") {
        for (int i = 0; i < palabrasOrdenadas.size(); i++) {
            for (int j = 0; j < palabrasOrdenadas.size() - 1; j++) {
                if (palabrasOrdenadas[j] < palabrasOrdenadas[j + 1]) {
                    string aux = palabrasOrdenadas[j];
                    palabrasOrdenadas[j] = palabrasOrdenadas[j + 1];
                    palabrasOrdenadas[j + 1] = aux;
                }
            }
        }
    }
    return palabrasOrdenadas;
}

string Sistema::buscar(vector<int> numeros, int numero, string modoBusqueda) {
    string resultado;
    if (modoBusqueda == "secuencial") {
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros[i] == numero) {
                resultado = "Numero encontrado";
                break;
            } else {
                resultado = "Numero no encontrado";
            }
        }
    } else if (modoBusqueda == "binaria") {
        int inicio = 0;
        int fin = numeros.size() - 1;
        int medio = (inicio + fin) / 2;
        while (inicio <= fin) {
            sort(numeros.begin(), numeros.end());
            if (numeros[medio] == numero) {
                resultado = "Numero encontrado";
                break;
            } else if (numeros[medio] < numero) {
                inicio = medio + 1;
            } else {
                fin = medio - 1;
            }
            medio = (inicio + fin) / 2;
        }
        if (inicio > fin) {
            resultado = "Numero no encontrado";
        }
    }
    return resultado;
}

string Sistema::buscar(vector<string> palabras, string palabra, string modoBusqueda) {
    string resultado;
    if (modoBusqueda == "secuencial") {
        for (int i = 0; i < palabras.size(); i++) {
            if (palabras[i] == palabra) {
                resultado = "Palabra encontrada";
                break;
            } else {
                resultado = "Palabra no encontrada";
            }
        }
    } else if (modoBusqueda == "binaria") {
        sort(palabras.begin(), palabras.end());
        int inicio = 0;
        int fin = palabras.size() - 1;
        int medio = (inicio + fin) / 2;
        while (inicio <= fin) {
            if (palabras[medio] == palabra) {
                resultado = "Palabra encontrada";
                break;
            } else if (palabras[medio] < palabra) {
                inicio = medio + 1;
            } else {
                fin = medio - 1;
            }
            medio = (inicio + fin) / 2;
        }
        if (inicio > fin) {
            resultado = "Palabra no encontrada";
        }
    }
    return resultado;
}