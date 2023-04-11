//
// Created by Agustin Lezcano on 04/04/2023.
//

#ifndef INC_007_SISTEMA_H
#define INC_007_SISTEMA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sistema {
public:
    int numero;
    string palabra;
    vector<int> numeros;
    vector<string> palabras;
    string modoOrdenamiento;
    string modoBusqueda;
    bool validacion(int numero);
    bool validacion(string palabra);
    string almacenar(int numero);
    string almacenar(string palabra);
    int cantidad(vector<int> numeros);
    int cantidad(vector<string> palabras);
    vector<int> ordenar(vector<int> numeros, string modoOrdenamiento);
    vector<string> ordenar(vector<string> palabras, string modoOrdenamiento);
    string buscar(vector<int> numeros, int numero, string modoBusqueda);
    string buscar(vector<string> palabras, string palabra, string modoBusqueda);
};

#endif //INC_007_SISTEMA_H