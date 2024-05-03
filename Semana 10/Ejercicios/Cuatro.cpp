#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const int N = 8;

void imprimirTablero(const vector<int>& reinas) {       //impresion tablero
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

void backtracking(vector<int>& reinas, int col, int& contador,
                     unordered_set<int>& filasOcupadas,
                     unordered_set<int>& diagonalesPrincipales,
                     unordered_set<int>& diagonalesSecundarias) {

    if (col == N) { //verificacion si cumple las ocho reinas, se imprime
        contador++;
        cout << "Solucion " << contador << ":\n";
        imprimirTablero(reinas);
        return;
    }

    // Intenta colocar una reina en cada fila de la columna actual
    for (int fila = 0; fila < N; fila++) {
        // Calcula las diagonales principal y secundaria
        int diagPrincipal = col - fila;
        int diagSecundaria = col + fila;

        // Verifica si la posición es segura
        if (filasOcupadas.find(fila) == filasOcupadas.end() &&
            diagonalesPrincipales.find(diagPrincipal) == diagonalesPrincipales.end() &&
            diagonalesSecundarias.find(diagSecundaria) == diagonalesSecundarias.end()) {
            // Coloca la reina en la posición actual
            reinas[col] = fila;

            // Marca la fila y diagonales como ocupadas
            filasOcupadas.insert(fila);
            diagonalesPrincipales.insert(diagPrincipal);
            diagonalesSecundarias.insert(diagSecundaria);

            // Llama a la función recursivamente para la siguiente columna
            backtracking(reinas, col + 1, contador, filasOcupadas, diagonalesPrincipales, diagonalesSecundarias);

            // Desmarca la fila y diagonales como ocupadas (backtracking)
            filasOcupadas.erase(fila);
            diagonalesPrincipales.erase(diagPrincipal);
            diagonalesSecundarias.erase(diagSecundaria);
        }
    }
}

int main() {
    vector<int> reinas(N, -1); // Inicializa un vector de posiciones de reinas
    int contador = 0; 

    unordered_set<int> filasOcupadas;
    unordered_set<int> diagonalesPrincipales;
    unordered_set<int> diagonalesSecundarias;

    backtracking(reinas, 0, contador, filasOcupadas, diagonalesPrincipales, diagonalesSecundarias);

    cout << "Se encontraron un total de " << contador << " soluciones." << endl;

    return 0;
}
