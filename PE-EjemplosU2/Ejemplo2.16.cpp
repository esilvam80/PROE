/******************************************************
 * Uso del operador de incremento ++ para controlar la 
iteraciÃ³n de un bucle (una de las aplicaciones mÃ¡s 
usuales de ++)
*****************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char car = 0; // car = carÃ¡cter nulo (\0)
    cout<<"Introduzca una cadena de texto: "<<endl;
    while (1)
    {
        cin.get(car);
        if (car != '\n')
            cout<<"El codigo ASCII de "<<car
            <<" es " <<car-'0'<<endl;
        else
            cout<<"Introduzca una cadena de texto: "<<endl;
    }
    return 0;
}
