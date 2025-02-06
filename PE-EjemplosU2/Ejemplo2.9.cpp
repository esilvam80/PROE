/***************************************************
Calcular el mayor de dos números leídos del teclado 
y visualizarlo en pantalla.
***************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Introduzca dos enteros: \n";
    cout << "Valor 1:\t"; cin >> x;
    cout << "Valor 2:\t";  cin >> y;
    
    if (x > y) 
        cout << "\nEl mayor es: \t" << x << endl;
    else
        cout << "\nEl mayor es: \t" << y << endl;
        
    return 0;
}

