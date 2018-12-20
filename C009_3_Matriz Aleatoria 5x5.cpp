#include<iostream>      //mete y saca informacion
#include<cstdlib>       //contiene muchas cosas entre ella es ran, que consiste en sacar numeros aleatorios
#include<ctime>         //permite sacar la hora del ordenador
using namespace std;
int main(){
           float matriz[3][3];  //aquí guardamos los numeros
           int fil, col;
           double semillita;
           char salir;
           semillita=time(0);
           srand(semillita);
           for(fil=0;fil<5;fil++){
                                   for(col=0;col<5;col++){
                                                          matriz[fil][col]=rand()%10;
                                                          cout<<matriz[fil][col];
                                                          }
                                   cout<<"\n";
                                   }
            cout<<"\nEscriba una letra y pulse intro para salir";
            cin>>salir;
            return 0;
            }
