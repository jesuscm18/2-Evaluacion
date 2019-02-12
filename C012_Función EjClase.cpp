#include<iostream>

using namespace std;
float mayor(float num1,float num2,float num3,float num4){
    float respuesta;
    if(num1>num2 && num1>num3 && num1>num4){
                 respuesta=num1;
                 }
    if(num2>num1 && num2>num3 && num2>num4){
                 respuesta=num2;
                 }
    if(num3>num1 && num3>num2 && num3>num4){
                 respuesta=num3;
                 } 
    if(num4>num1 && num4>num2 && num4>num3){
        respuesta=num4;
        }
    return respuesta; 
    }
float media(float num1,float num2,float num3,float num4){
      float respuesta2;
      respuesta2=(num1+num2+num3+num4)/4;
      return respuesta2;
      }
int main(){
    float num1 ;float num2;float num3;float num4;
    char salir;
    //Leo un número entero
    cout<<"Introduce un numero: ";
    cin>>num1;
    //Leo otro número entero
    cout<<"Introcuce otro numero: ";
    cin>>num2;
    //Leo otro numero entero
    cout<<"Introduce otro numero: ";
    cin>>num3;
    cout<<"Introduce un cuarto numero: ";
    cin>>num4;
    //Los envío a una función que los compara
    cout<<"El numero mayor es:"<<mayor(num1,num2,num3,num4)<<"\n";
    cout<<"La media de estos numeros es:"<<media(num1,num2,num3,num4)<<"\n";
    cout<<"Pulse tecla y pulse enter para salir: ";
    cin>>salir;
    return 0;
    }
