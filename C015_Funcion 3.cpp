#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int num;
    int i,j;
    char dias_semana[7][10];
    char nombre_dia[10];
    int respuesta;
    char salir;
    cout<<"\nVamos a introducir los dias de la semana";
    for(i=0;i<=6;i++){
          cout<<"\ndia "<<i+1<<": ";
          cin>>nombre_dia;     
          for(j=0;j<strlen(nombre_dia)+1;j++){
               dias_semana[i][j]=nombre_dia[j];
          }                 
    }
    //Mostramos la matriz
    cout<<"\n";
    for(i=0;i<=6;i++){
      for(j=0;dias_semana[i][j]!='\0';j++){
        cout<<dias_semana[i][j];
      }
      cout<<"\n";
    }
       cout<<"Que dia de la semana quieres saber? ";
    cin>>num;
    
    for(i=num-1;i<=num-1;i++){
      for(j=0;dias_semana[i][j]!='\0';j++){
        cout<<"Es: "<<dias_semana[i][j];
      }
      cout<<"\n";
    } 
    
    //cout<<semana( num1);
    cin>> salir;
    return 0;
}
