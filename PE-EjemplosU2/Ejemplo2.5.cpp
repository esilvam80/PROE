//******************************************************************
// Programa Prompts
// Este programa demuestra el uso de los mensajes de entrada
//******************************************************************
#include <iostream>
#include <iomanip> // Para setprecision ()

using namespace std;
int main()
{
    int partNumber;
    int quantity;
    float unitPrice;
    float totalPrice;
    cout << fixed << showpoint // Establecer punto fl otante
    << setprecision(2); // Formato de salida
    cout << "Introduzca el número de parte:" << endl; // Prompt
    cin >> partNumber;
    cout << "Introduzca la cantidad pedida de esta parte:" // Prompt
    << endl;
    cin >> quantity;
    cout << "Introduzca el precio unitario para esta parte:" // Prompt
    << endl;
    cin >> unitPrice;
    totalPrice = quantity * unitPrice;
    cout << "Parte " << partNumber // Echo print
    << ", cantidad " << quantity
    << ", a $ " << unitPrice << " cada una" << endl;
    cout << "total $ " << totalPrice << endl;
    return 0;
}

