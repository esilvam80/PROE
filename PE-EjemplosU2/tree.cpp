#include <iostream>
using namespace std;
int main() {
    int height; // Altura del arbol
    cout << "Ingrese la altura del árbol: ";
    cin >> height; // altura del usuario
    int row = 0; // Primera fila, para dibujar
    
    while (row < height) { 
    // Dibujar una fila por cada unidad de altura 
        int count = 0;
        // Imprimir espacios principales
        while (count < height - row) {
            cout << " ";
            count++;
        }
        count = 0;
        while (count < 2*row + 1) {
            cout << "*";
            count++;
        }
        // Mueva el cursor a la siguiente línea
        cout << '\n';
        // Cambiar a la siguiente fila
        row++;
    }
        return 0;
}