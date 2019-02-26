#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int num;
    int num2;
    int num1;
    int mese;
    int i,j;
    char mes_ano[12][10];
    char mes[10];
    char rep;
    char salir;
    
    cout<<"Introduzca numero de día";
    cin>>num2;
    cout<<"Introduzca el año";
    cin>>num1;
    cout<<"\nVamos a introducir los meses del ano: ";
    for(i=0;i<=11;i++){
          cout<<"\nMes "<<i+1<<": ";
          cin>>mes;     
          for(j=0;j<strlen(mes)+1;j++){
               mes_ano[i][j]=mes[j];
          }                 
    }
    //Mostramos la matriz
    cout<<"\n";
    for(i=0;i<=11;i++){
      for(j=0;mes_ano[i][j]!='\0';j++){
        cout<<mes_ano[i][j];
      }
      cout<<"\n";
    }
    cout<<"Que mes del ano quieres saber? ";
    cin>>num;
    
    for(i=num-1;i<=num-1;i++){
      for(j=0;mes_ano[i][j]!='\0';j++){
        cout<<mes_ano[i][j];
        cin>>mese;
      }
      cout<<"\n";
    }
    cout<<"La fecha indicada es "<<num2<<" de "<< mese<<" de "<<num1;
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}
