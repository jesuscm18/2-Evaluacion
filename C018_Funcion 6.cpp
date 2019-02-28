#include<iostream>

using namespace std;
float suma(float num1,float num2){
    float rep;
    rep=(num1+num2);
        return rep; 
        }
float resta(float num1,float num2){
    float rep2;
     rep2=num1-num2;
      return rep2;
      }
float multi(float num1,float num2){
    float rep3;
     rep3=(num1)*(num2);
      return rep3;
      }
float divi(float num1,float num2){
    float rep4;
      rep4=(num1)/(num2);
      return rep4;
      }

int main(){
    float num1 ;float num2; char op;
    char salir;
    float rep1; float rep2; float rep3; float rep4;float res;
    //Leo un número entero
    cout<<"Introduce un numero: ";
    cin>>num1;
    //Leo otro número entero
    cout<<"Introcuce otro numero: ";
    cin>>num2;
    cout<<"\nPuedo hacer estas operaciones: sumar, restar, multiplicar y dividir:";
    cout<<"\nPara sumar pulse s";
    cout<<"\nPara restar pulse r";
    cout<<"\nPara multiplicar pulse m";
    cout<<"\nPara dividir pulse d";
    cout<<"\nQue operación desea realizar? ";
    cin>>op;
    //Los envío a una función que los compara
    if(op==115){
        cout<<suma(num1,num2);
        }
    else{
        if(op==114){
            cout<<resta(num1,num2);
        }
        else{
            if(op==109){
                 cout<<multi(num1,num2);
            }
            else{
                if(op==100){
                    cout<<divi(num1,num2);
                    }
                }
            }
       }
    cout<<"\nPulse tecla y pulse enter para salir: ";
    cin>>salir;
    return 0;
    }
