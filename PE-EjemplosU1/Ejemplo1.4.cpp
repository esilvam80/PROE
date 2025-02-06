#include <iostream>
 
using namespace std;
 
int main() {
    // Entrada de datos con cin
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
 
    string nombre;
    cout << "Ingresa tu nombre: ";
    cin.ignore(); // Para eliminar el salto de línea pendiente en el buffer
    getline(cin, nombre);
 
    // Salida de datos con cout
    cout << "Hola, " << nombre << ". Tienes " << edad << " años." << endl;
 
    return 0;
}
