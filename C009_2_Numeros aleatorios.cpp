#include<iostream>      //mete y saca informacion
#include<cstdlib>       //contiene muchas cosas entre ella es ran, que consiste en sacar numeros aleatorios
#include<ctime>         //permite sacar la hora del ordenador
using namespace std;
int main(){
       float lista[5];  //aquí guardamos los numeros
       int i;
       double semillita;
       char salir;
       semillita=time(0);
       srand(semillita);
       for(i=0;i<5;i++){
                        lista[i]=rand()%6;
                        cout<<lista[i]<<"\n";
                        }
       cout<<"\nEscriba una letra y pulse intro para salir";
       cin>>salir;
       return 0;
}
