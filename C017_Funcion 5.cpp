
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char salir;
    int numes;
    int nudia;
    int nuano;
    char meses[12][20]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    cout<<"Introduzca el dia del mes: ";
    cin>>nudia;
    cout<<"Introduzca el numero de mes: ";
    cin>>numes;
    cout<<"Introduzca el año: ";
    cin>>nuano;
    
    cout<<"La fecha indicada es "<<nudia<<" de "<< meses[numes-1]<<" de "<<nuano;
    cout<<"\nIntroduce una letra y pulse intro para salir: ";
    cin>> salir;
    return 0;
}
