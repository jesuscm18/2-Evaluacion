#include<iostream>
#include<string.h>
#include<cstdlib>   
using namespace std;

int main(){
    int i,j;
    char palabra[1][90];
    char letras[90];
    char salir;
    
    cout<<"Digame una palabra y te dire la posicion en el abecedario de la primera letra:";
    for(i=1;i<=1;i++){
          cout<<"\nIntroduzca la palabra(Mayusculas por favor): ";
          cin>>letras;     
          for(j=0;j<=strlen(letras);j++){
               palabra[i][j]=letras[j];
          }                 
    }
    //Mostramos la matriz
    cout<<"\n";
    for(i=1;i<=1;i++){
      for(j=0;palabra[i][j]!='\0';j++){
        cout<<palabra[i][j];
      }
      cout<<"\n";
    }
    cout<<"\nLa primera letra es "<<palabra[1][0]<<" y ocupa el lugar "<<palabra[1][0]-64;
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}
