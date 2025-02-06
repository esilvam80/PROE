#include <iostream>
using namespace std;

int main()
{
    int contador = 0; // inicializa la condiciÃ³n
    while(contador < 15) // condiciÃ³n de prueba
    {
        contador ++; // cuerpo del bucle
        cout << "contador: " << contador << "\n";
    }
    cout << "Terminado...Contador: " << contador << "\n";
    return 0;
}
