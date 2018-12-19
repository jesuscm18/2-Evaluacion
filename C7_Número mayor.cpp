#include<iostream>
using namespace std;
main(){
       float num[10];
       int i;
       float suma=0;//inicializamos a 0 la variable contadora
       float n_numeros;
       float media;
       float mayor;
       cout<<"Cuantos numeros quieres introducir? ";
       cin>>n_numeros;
       char salir;
       for(i=0;i<n_numeros;i++){
                cout<<"\nDime un numero: ";
                cin>>num[i];
       }
       //Ahora voy a enseñar mis numeros
       cout<<"\nLISTA DE LOS NUMEROS: \n";
       for(i=0;i<n_numeros;i++){
                          cout<<num[i];
                          cout<<"\n";
       }
       //Ahora viene lo bueno
       //Calculamos la media de los numeros del ARRAY
       mayor=num[0];
       for(i=0;i<=n_numeros;i++){
                                 if(num[i]>mayor){
                                                  mayor=num[i];
                                                  }
                                 }
       cout<<"\nEl numero mayor de los introducidos es: "<<mayor;
       cout<<"\nToca cualquier tecla para salir ";
       cin>>salir;
       return 0;
}
