#include<iostream>
#include<string.h>
using namespace std;

float total(float cant, char tipo){
    float respuesta;
    if(tipo=1){
                 respuesta=cant*1.07;
                 }
    if(tipo=2){
                 respuesta=cant*1.04;
                 }
    if(tipo=0){
                 respuesta=cant*1.16;
                 } 
    return respuesta; 
    }

int main(){
    float cant;
    char salir;
    char tipo;
    cout<<"Cuanto cuesta su producto? ";
    cin>>cant;
    cout<<"Que tipo de I.V.A. se le aplica(general=0, reducido=1, superreducido=2)?";
    cin>>tipo;
    cout<<"Su producto le costara: "<<total(cant, tipo)<<" ";
    
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}
