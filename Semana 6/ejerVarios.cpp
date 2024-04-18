#include <iostream>
#include <string>
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

int contNum(string a){
    
    int counter{0};
    for( int i = 0; i < a.length()  ; i++ ) {                
        int val = static_cast<int>(a.at(i));
        if(val >= 48 && val <= 59)
            counter++;
    }   
    return counter;
}

string Mayu(string a){
    char c;
    for( int i = 0; i < a.size(); i++ ) {        
        c = a.at(i);
        int val = static_cast<int>(c);
        if(val >= 97 && val <= 122)
            a.at(i) = c - 32;  //toupper(c);
    }
    
    return a;
}

int fib(int a){
    int t1=1;
    int t2=1;
    int t3;

    for(int i=1;i<=a;i++){
        if( i == 1 || i==2){            
            continue; 
        }
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t3;
}

int fibRecursivo(int a){
    if(a==0 || a==1){
        return 1;
    }else{
        return fib(a-2)+fib(a-1);
    }
}

int main(){

    //long long numero;

    int cant;
    cout<<"Introduce el numero: ";
    cin>>cant;

    /*string pal;
    cout << "Ingrese una cadena por favor: ";
    getline(cin, pal);*/

    //cout<<Mayu(pal);

    //printNPrimos(cant);

    /*if( esPrimo(numero) ) {
        cout << numero << " ES PRIMO" << endl;
    }else{
        cout << numero << " NO ES PRIMO" << endl;
    }*/

    cout<<fib(cant);
    cout<<fibRecursivo(cant);


    return 0;
}
