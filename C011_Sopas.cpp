#include<iostream>      //mete y saca informacion
#include<cstdlib>       //contiene muchas cosas entre ella es ran, que consiste en sacar numeros aleatorios
#include<ctime>         //permite sacar la hora del ordenador
#include<string.h>
using namespace std;
int main(){
           char matriz[10][10];  //aquí guardamos los numeros
           int fil, col;
           int posx, posy;
           int semillita;
           int longitud;
           char col_contadora;
           char palabra[10];
           char salir;
           semillita=time(0);
           srand(semillita);
           //Rellenamos la matriz
           for(fil=0;fil<10;fil++){
             for(col=0;col<10;col++){
               matriz[fil][col]=rand()%26+65;
               }
             }         
           cout<<"\nMATRIZ VIEJA";
           cout<<"\n";
           //Mostrar por pantalla
           for(fil=0;fil<10;fil++){
             for(col=0;col<10;col++){
               cout<<matriz[fil][col];
                 }
                 cout<<"\n";
                   }
                                   
           //Pido una palabra y mido
           cout<<"\nIntroduzca una palabra de menos de 10 palabras ";
           cin>>palabra;
           longitud=strlen(palabra);
           cout<<"\nLa palabra mide: "<<longitud<<"\n";
           
           //Posicion de la palabra al azar
           posy=rand()%10;
           posx=rand()%(10-longitud);
           cout<<"\nposx= "<<posx;
           cout<<"\nposy= "<<posy;
           //matriz[posx][posy]='*';
           for(col=posx;col<(posx+longitud);col++){
               matriz[posy][col]=palabra[col-posx];
           }   
           //Mostrar por pantalla matriz nueva
           cout<<"\nMATRIZ NUEVA"<<"\n";
           for(fil=0;fil<10;fil++){
             for(col=0;col<10;col++){
               cout<<matriz[fil][col];
                                                           }
                                   cout<<"\n";
                                   }
           cout<<"\nEscriba una letra y pulse intro para salir";
           cin>>salir;
           return 0;
}
