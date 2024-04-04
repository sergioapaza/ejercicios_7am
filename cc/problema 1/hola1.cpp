#include <iostream>
#include "estudiante.h"
#include <string>
using namespace std;
int main(){
    string n1,n2;
    int e1,e2;
    cout<<"Ingrese el primer nombre: ";
    getline(cin, n1);


    cout<<"Ingrese la primera edad: ";
    cin>>e1;


    cin.ignore();
    cout<<"Ingrese el segundo nombre: ";
    getline(cin, n2);


    cout<<"Ingrese la primera edad: ";
    cin>>e2;


    Student estudiante1(n1,e1);
    Student estudiante2(n2,e2);


    cout<<"si es 1 es menor de edad, si es 0 es mayor de edad."<<endl;
    cout<<"El estudiante "<<estudiante1.getName()<<" tiene "<<estudiante1.getAge()<<" y es "<<estudiante1.isOlder(e1)<<endl;


    cout<<"El estudiante "<<estudiante2.getName()<<" tiene "<<estudiante2.getAge()<<" y es "<<estudiante2.isOlder(e2)<<endl;
   
    return 0;


}
