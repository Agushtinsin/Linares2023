//
// Created by Agustin Lezcano on 28/03/23.
//

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include "Logica.h"
using namespace std;

bool Logica::validacion() {
    bool resultado=true;
    if(palabra.length()!=5){
        resultado=false;
    }
    return resultado;
}
string Logica::es_capicua() {
    string resultado="ES CAPICUA";
    if(palabra[4]!=palabra[0] || palabra[3]!=palabra[1]){
        resultado="NO "+resultado;
    }
    return resultado;
}