//******************************************************************
// Este programa produce una actividad apropiada
// para una temperatura dada
//******************************************************************
#include <iostream>
using namespace std;
int main()
{
    int temperature; // La temperatura exterior
    // Leer e imprimir por eco la temperatura
    cout << "Introducir la temperatura exterior: " << endl;
    cin >> temperature;
    cout << "La temperatura actual es: \t " << temperature << endl;
 
    // Imprimir actividad
    cout << "La actividad recomendada es ";
    if (temperature > 35)
        cout << "nadar." << endl;
    else if (temperature > 70)
        cout << "tenis." << endl;
    else if (temperature > 32)
        cout << "golf." << endl;
    else if (temperature > 0)
        cout << "esquiar." << endl;
    else
        cout << "bailar." << endl;
    
    return 0;
}


