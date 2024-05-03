#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 8;


vector<int> reinasRanndom() {  //Generacion aleatoria de reinas "1"
    vector<int> reinas(N);
    for (int col = 0; col < N; col++) {     //llenado aleatorio
        reinas[col] = rand() % N;
    }
    return reinas;
}


bool verificacionReinas(const vector<int>& reinas) {      //verificacion de las reinas
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (reinas[i] == reinas[j] || abs(reinas[i] - reinas[j]) == abs(i - j)) { //verificacion si no se cruzan las reinas, fila o diagonal
                return false;
            }
        }
    }
    return true;
}


void imprimirTablero(const vector<int>& reinas) { //impresion
    for (int fila = 0; fila < N; fila++) {
        for (int col = 0; col < N; col++) {
            if (reinas[col] == fila) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;
}


void backtracking() {
    srand(time(0)); //números aleatorios
    int contadorSoluciones = 0; 

    const int limiteIntentos = 1000000; //limite de veces que se ejecutara

    for (int intento = 0; intento < limiteIntentos; intento++) {
        vector<int> reinas = reinasRanndom();

        if (verificacionReinas(reinas)) {     //verificacion si cumple los requisitos para imprimir
            contadorSoluciones++;
            cout << "Solucion " << contadorSoluciones << ":\n";
            imprimirTablero(reinas);
            cout << endl;
        }

    }

    cout << "Se encontraron un total de " << contadorSoluciones << " soluciones." << endl;
}

int main() {
    backtracking();
    return 0;
}
