#include <iostream>
#include "anio.h"
#include <string>
using namespace std;
int main(){
    Anio fechaUno{50,50,2051};
    fechaUno.isLeapYear(2020);
    cout<<endl;
    fechaUno.displayDate();
   
    return 0;
}
