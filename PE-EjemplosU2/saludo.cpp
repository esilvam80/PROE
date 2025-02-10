#include <iostream>
using namespace std;
int main()
{
    char opcion;
    do
    {
        cout << "Hola, Bienvenido a C++"<< endl;
        cout << "¿Desea otro tipo de saludo? (Si=s/No=n)\n";
        cin >> opcion;
    } while (opcion == 's'|| opcion == 'S');
    cout << "Adios\n";
    return 0;
}

