// Simple menu program demonstrating
// the use of "break" and "continue"
#include <iostream>
using namespace std;
int main() {
     char c; // Respuesta
    while(true) {
        cout << "MENU PRINCIPAL:" << endl;
        cout << "l: Izquierda, r: Derecha, q: Quitar -> ";
        cin >> c;
        if(c == 'q')
            break; // Salir de While (1)"
        
        if(c == 'l') {
            cout << "MENU IZQUIERDO:" << endl;
            cout << "Seleccion a ó b: ";
            cin >> c;
            if(c == 'a') {
                cout << "Tu elegiste ’a’" << endl;
                continue; // Volver al menú principal
            }
            if(c == 'b') {
                cout << "Tu elegiste ’b’" << endl;
                continue; // Volver al menú principal
            }else {
                cout << "No elegiste a o b!"<< endl;
                continue; //Volver al menú principal
            }
        }
        if(c == 'r') {
            cout << "MENU DERECHO:" << endl;
            cout << "Selecciona 'c' o 'd': ";
            cin >> c;
            if(c == 'c') {
                cout << "Tu elegiste ’c’" << endl;
                continue; // Volver al menú principal
            }
            if(c == 'd') {
                cout << "Tu elegiste ’d’" << endl;
                continue; // Volver al menú principal
            }else {
                cout << "No elegiste c o d!"<< endl;
                continue; // Volver al menú principal
            }
        }
        cout << "¡Debes escribir 'l' o 'r' o 'q'!" << endl;
    }
    cout << "Salir del menú..." << endl;
    return 0;
}





    