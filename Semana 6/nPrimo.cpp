#include <iostream>
using namespace std;

bool esPrimo(int n) {

    if(n==2){
        return true;
    }
    if( n % 2 == 0 || n == 0 || n == 1) {
        return false;
    }
    for(int i = 2; i <= n/2; i++){
        if( n % i == 0){
            return false;
        }
    }
    
    return true;
}

void printNPrimos(int n) {
    int contador=0;
    int a=2;
    //Con while
    /*while(contador<n){
        if(esPrimo(a)){
            cout<<a<<endl;
            contador++;
        }
        a++;
    }*/

    //Con for
    for(contador;contador<n;){
        if(esPrimo(a)){
            cout<<a<<endl;
            contador++;
        }
        a++;
    }
    

}

int main(){

    //long long numero;

    int cant;
    cout<<"Introduce el numero: ";
    cin>>cant;

    printNPrimos(cant);
    /*if( esPrimo(numero) ) {
        cout << numero << " ES PRIMO" << endl;
    }else{
        cout << numero << " NO ES PRIMO" << endl;
    }*/


    return 0;
}