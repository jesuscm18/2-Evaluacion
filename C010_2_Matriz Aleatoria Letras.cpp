#include<iostream>      //mete y saca informacion
#include<cstdlib>       //contiene muchas cosas entre ella es ran, que consiste en sacar numeros aleatorios
#include<ctime>         //permite sacar la hora del ordenador
using namespace std;
int main(){
           int matriz[10][10];
           char letras[]=("A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z");  //aquí guardamos los numeros
           int fil,col;
           int pos_letra;
           char salir;
           double semillita;
           semillita=time(0);
           srand(semillita);
           for(fil=0;fil<10;fil++){
                                   for(col=0;col<10;col++){
                                                          matriz[fil][col]=rand()%26;
                                                          pos_letra=matriz[fil][col];
                                                          cout<<letras[pos_letra];
                                                          }
                                   cout<<"\n";
                                   }
            cout<<"\nEscriba una letra y pulse intro para salir";
            cin>>salir;
            return 0;
            }
