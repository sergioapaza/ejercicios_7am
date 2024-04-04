#include <iostream>
#include "anio.h"
#include <string>
using namespace std;
int main(){
    int dia=20;
    int mes=5;
    int anio=2048;
    Anio fechaUno{dia,mes,anio};
    fechaUno.isLeapYear();
    cout<<endl;

    cout<<"si es 1 es un anio bisiesto, si es 0 no es bisisesto."<<endl;
    cout<<fechaUno.isLeapYear();
    fechaUno.displayDate();
   
    return 0;
}
