#include <iostream>
using namespace std;
const int centinela = -1;
int main()
{
    // entrada de datos numericos
    // centinela -1
    int nota, cuenta,suma;
    cout << "Introduzca primera nota"<<endl;
    cin >> nota;
    while (nota != centinela)
    {
        cuenta++;
        suma += nota;
        cout << "Introduzca la siguiente nota:";
        cin >> nota;
    } // fin de while
    cout <<"Cantidad de notas: "<<cuenta;
    cout <<"Promedio: "<<suma/cuenta<<endl;
    
    cout << "Final"<<endl;
    return 0;
}

