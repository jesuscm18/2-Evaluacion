#include <iostream>
using namespace std;

float cambio(float dol){
      float eur;
      eur=(dol*0.88);
      return eur;
      
      }
int main(){
    float dol;
    char salir;
    cout<<"Buenos dias, bienvenido al cambiador dinero\nIntroduzca la cantidad de dolares para pasarla a euros: ";
    cin>>dol;
    cout<<"\nSus "<<dol<<" son "<<cambio(dol)<<" euros.";
    cout<<"\n\nIntrozca letra y pulse intro para salir: ";
    cin>>salir;
    return 0;
    }
