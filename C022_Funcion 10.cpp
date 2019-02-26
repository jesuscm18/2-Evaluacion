#include<iostream>
#include<string.h>
using namespace std;

float anterior1(float num){
    float respuesta;
    respuesta=num-1;
        return respuesta;
        }
float anterior2(float num){
    float respuesta1;
    respuesta1=num-2;
        return respuesta1;
        }
float anterior3(float num){
    float respuesta2;
    respuesta2=num-3;
        return respuesta2;
        }
float posterior1(float num){
      float respuestap3;
      respuestap3=num+1;
        return respuestap3;
        }
float posterior2(float num){
      float respuestap4;
      respuestap4=num+2;
        return respuestap4;
        }
float posterior3(float num){
      float respuestap5;
      respuestap5=num+3;
        return respuestap5;
        }

int main(){
    float num;
    char salir;
    cout<<"Introduzca un numero: ";
    cin>>num;
    cout<<"Los tres anteriores son: "<<anterior1(num)<<", "<<anterior2(num)<<", "<<anterior3(num);
    cout<<"\nY los tres posteriores son:"<<posterior1(num)<<", "<<posterior2(num)<<", "<<posterior3(num);
    
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}

