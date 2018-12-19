#include<iostream>
using namespace std;
main(){
       float num[10];
       int i;
       float suma=0;//inicializamos a 0 la variable contadora
       float n_numeros;
       float media;
       cout<<"Cuantos numeros quieres introducir? ";
       cin>>n_numeros;
       char salir;
       for(i=0;i<n_numeros;i++){
                cout<<"Dime un numero: ";
                cin>>num[i];
                cout<<"\n";
       }
       //Ahora voy a enseñar mis numeros
       cout<<"LISTA DE LOS NUMEROS: \n";
       for(i=0;i<n_numeros;i++){
                          cout<<num[i];
                          cout<<"\n";
       }
       //Ahora viene lo bueno
       //Calculamos la media de los numeros del ARRAY
       for(i=0;i<n_numeros;i++){
                                 suma=suma+num[i];
                                 cout<<"\n";
       }
       media=suma/n_numeros;
       cout<<"\nMEDIA: "<<media;
       cout<<"\nToca cualquier tecla para salir ";
       cin>>salir;
       return 0;
}
