#include<iostream>

using namespace std;

float multiplicacion(float num1,float num2,float num3,float num4){
      float resultado;
      resultado=num1*num2*num3*num4;
      return resultado;
      }
int main(){
    float num1; float num2; float num3; float num4;
    char salir;
    cout<<"Introduzca cuatro numeros para realizar su multiplicacion.";
    cout<<"\nPrimer numero: ";
    cin>>num1;
    cout<<"\nSegundo numero: ";
    cin>>num2;
    cout<<"\nTercer numero: ";
    cin>>num3;
    cout<<"\nCuarto numero: ";
    cin>>num4;
    cout<<"Suproducto es:"<<multiplicacion(num1,num2,num3,num4);
    cout<<"\nEscriba una letra y pulse enter para salir:";
    cin>>salir;
    return 0;
    }
