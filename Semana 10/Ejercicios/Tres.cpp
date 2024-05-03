#include <iostream>

using namespace std;

int main(){
    string cad;
    cout << "Ingrese una cadena por favor: ";
    getline(cin, cad);

    char c;
    string cadNew;

    for( int i = 0; i < cad.size(); i++ ) {     
        c = cad.at(i);
        int val = static_cast<int>(c);
        if(val >= 65 && val <= 90){     //Se pone las mayusculas en minusculas 
            cad.at(i) = c + 32;          
        }
    }

    for( int i = 0; i < cad.size(); i++ ) {     
        c = cad.at(i);
        int val = static_cast<int>(c);

        if(val >= 97 && val <= 122){    //Se guarda solo las letras      
            cadNew=cadNew+c;
        }
    }
    bool palindrome = true;

    int h = cadNew.size() - 1;
    for (int i = 0; i < cadNew.size() / 2; i++) {
        if (cadNew[i] != cadNew[h]) {
            palindrome = false;
            break;  // Sale del bucle si se encuentra una diferencia
        }
        h--;  // Decrementa h en cada iteración
    }

    cout << endl;
    cout << "La nueva palabra es: " << cadNew << endl;
    cout << (palindrome ? "Es un palindromo." : "No es un palindromo.") << endl;
    return 0;
}
