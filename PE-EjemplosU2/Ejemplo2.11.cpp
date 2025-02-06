#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
        if (numero % 2 == 0) {
            cout << "Además, es un número par." << endl;
        } else {
            cout << "Además, es un número impar." << endl;
        }
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}

