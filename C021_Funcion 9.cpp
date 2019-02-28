#include<iostream>
#include<string.h>
using namespace std;

float total(float cant){
    float respuesta;
    if(cant<=40){
                 respuesta=cant*30;
                 }
    if(cant>40){
                 respuesta=(1200)+((cant-40)*30*1.5);
                 }
    return respuesta; 
    }

int main(){
    float cant;
    char salir;
    char tipo;
    cout<<"Cuantas horas ha trabajado? ";
    cin>>cant;
    cout<<"Esta semana el empleado cobrará "<<total(cant)<<" euros.";
    
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}
