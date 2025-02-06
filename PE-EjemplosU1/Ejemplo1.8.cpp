//***************************************************************************
// Este programa ingresa un año e imprime el año es año bisiesto o no
//***************************************************************************
#include <iostream> // Acceso de fl ujo de salida

using namespace std;

bool bisiesto( int ); // Prototipo para el subalgoritmo

int main(){
    int year; // Año a ser probado
    cout << "Introduzca el año:\t"; // Solicita la entrada
    cin >> year; // Lee año
    
    if (bisiesto(year)) // Prueba para el año bisiesto
        cout << "\n El año "<< year << " Es un año bisiesto. ---" << endl;
    else
        cout << "\n El año "<< year << " No es un año bisiesto.---" << endl;
    
    return 0; // Indica que se completó satisfactoriamente
}
//***************************************************************************
// bisiesto regresa verdadero si year es bisiesto 
// y  falso en cualquier otro caso.
bool bisiesto( int year ){
    if (year % 4 != 0) // ¿Year no es divisible entre 4?
        return false; // Si es así, no puede ser bisiesto
    else
        if (year % 100 != 0) // ¿Year no es múltiplo de 100?
            return true; // Si es así, es año bisiesto
        else 
            if (year % 400 != 0) // ¿Year no es múltiplo de 400?
                return false; // Si es así, entonces no es año bisiesto
            else
                return true; // Es un año bisiesto
}


