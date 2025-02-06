#include <iostream>
using namespace std;

int main()
{
    char car;
    bool digito_leido = false; // no se ha leido ningun dato
    
    while (!digito_leido){
        cout << "Introduzca un caracter:";
        cin >> car;
        digito_leido = (('0'<= car) && (car <= '9'));
    } // fin de while
    return 0;
}
