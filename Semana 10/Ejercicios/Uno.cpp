#include <iostream>
#include <vector>

using namespace std;

const int N = 8;

bool colocar(vector<vector<int>>& tablero, int fila, int col) {  // Verificacion para colocar una reina

    for (int i = 0; i < fila; i++) { // columna
        if (tablero[i][col] == 1) {
            return false;
        }
    }
    
    for (int i = fila, j = col; i >= 0 && j >= 0; i--, j--) {   //diagonal superior izquierda
        if (tablero[i][j] == 1) {
            return false;
        }
    }
    
    for (int i = fila, j = col; i >= 0 && j < N; i--, j++) {    //diagonal superior derecha
        if (tablero[i][j] == 1) {
            return false;
        }
    }
    return true;
}


void imprimirTablero(const vector<vector<int>>& tablero) { //imprimir tablero
    for (const auto& fila : tablero) {
        for (int celda : fila) {
            if (celda == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;
}


void backtracking(vector<vector<int>>& tablero, int fila, int& contador) {
    
    if (fila == N) { //si se cumplen las condiciones de las 8 reinas se imprime
        contador++;
        cout << "Solucion " << contador << ":\n";
        imprimirTablero(tablero);   
        return;
    }

    // Intenta colocar una reina en cada columna de la fila actual
    for (int col = 0; col < N; col++) { //colocacion de UNA reina, por columna
        if (colocar(tablero, fila, col)) {
            tablero[fila][col] = 1;

            backtracking(tablero, fila + 1, contador);   //llamamos recursivamente para la siguiente fila

            tablero[fila][col] = 0; //caso contrario, se reteocede y cambia a CERO
        }
    }
}

int main() {
    vector<vector<int>> tablero(N, vector<int>(N, 0)); 
    int contador = 0; 

    backtracking(tablero, 0, contador);

    cout << "Se encontraron un total de " << contador << " soluciones." << endl;

    return 0;
}
