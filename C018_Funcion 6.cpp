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
    //Leo un n�mero entero
    cout<<"Introduce un numero: ";
    cin>>num1;
    //Leo otro n�mero entero
    cout<<"Introcuce otro numero: ";
    cin>>num2;
    cout<<"\nPuedo hacer estas operaciones: sumar, restar, multiplicar y dividir:";
    cout<<"\nPara sumar pulse s";
    cout<<"\nPara restar pulse r";
    cout<<"\nPara multiplicar pulse m";
    cout<<"\nPara dividir pulse d";
    cout<<"\nQue operaci�n desea realizar? ";
    cin>>op;
    //Los env�o a una funci�n que los compara
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
