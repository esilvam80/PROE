#include <iostream>
#include <cmath> // Para usar M_PI (valor de pi)
using namespace std;

int main() {
    int opcion;
    double area, base, altura, radio, lado;

    cout << "Calculadora de áreas" << endl;
    cout << "1. Círculo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triángulo" << endl;
    cout << "4. Rectángulo" << endl;
    cout << "Ingresa tu opción (1-4): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa el radio del círculo: ";
            cin >> radio;
            area = M_PI * radio * radio; // Fórmula del área del círculo
            cout << "El área del círculo es: " << area << endl;
            break;
        case 2:
            cout << "Ingresa el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado; // Fórmula del área del cuadrado
            cout << "El área del cuadrado es: " << area << endl;
            break;
        case 3:
            cout << "Ingresa la base del triángulo: ";
            cin >> base;
            cout << "Ingresa la altura del triángulo: ";
            cin >> altura;
            area = (base * altura) / 2; // Fórmula del área del triángulo
            cout << "El área del triángulo es: " << area << endl;
            break;
        case 4:
            cout << "Ingresa la base del rectángulo: ";
            cin >> base;
            cout << "Ingresa la altura del rectángulo: ";
            cin >> altura;
            area = base * altura; // Fórmula del área del rectángulo
            cout << "El área del rectángulo es: " << area << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, selecciona una opción entre 1 y 4." << endl;
            break;
    }

    return 0;
}

