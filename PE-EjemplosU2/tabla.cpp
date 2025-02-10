#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int size; // Numero de filas y columnas de la tabla
    std::cout << "Ingresa el tamaño de la tabla: ";
    std::cin >> size;
    // Imprimir la tabla de tamaño size x size
    int row = 1;
    while (row <= size) { // Fila de la tabla.
        int column = 1; // Restablecer columna 
        while (column <= size) { // Columna de la tabla..
            int product = row*column; // Producto
            //std::setw(4) 
            cout << product; 
            column++; // Siguiente columna
        }
        cout << '\n'; // Move cursor to next row
        row++; // Siguiente fila
    }
}

