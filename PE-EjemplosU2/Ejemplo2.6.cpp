#include <iostream>
using namespace std;
int main()
{
    float numero;
    // obtener numero introducido por usuario
    cout "Introduzca un número positivo o negativo:";
    cin >> número;
    
    // comparar numero a cero
    if (numero > 0)
        cout << numero << "es mayor que cero" << endl;
    if (numero < 0)
        cout << numero << "es menor que cero" << endl;
    if (numero == 0)
        cout << numero << "es igual a cero" << endl;
}

