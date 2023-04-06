//
// Created by Agustin Lezcano on 28/03/23.
//


#include <iostream>
#include <string>
#include "Logica.h"
using namespace std;

int main(){
    Logica ologica;
    bool mientras=true;

    while(mientras==true && ologica.palabra!="FIN"){
        cout<<"Ingrese palabra: ";
        cin>>ologica.palabra;
        if(ologica.validacion()==true){
            ologica.mensaje=ologica.es_capicua();
            mientras=false;
        }
        else if(ologica.palabra!="FIN"){
            cout<<"INGRESO INVALIDO!"<<endl<<"VUELVA A INTENTAR o ESCRIBA FIN"<<endl;
            ologica.mensaje="ADIOS";
        }
        cin.ignore();
    }
    cout<<endl<<"RESULTADO: "<<ologica.mensaje;
    return 1;
}