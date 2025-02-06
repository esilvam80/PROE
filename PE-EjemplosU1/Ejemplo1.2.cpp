//******************************************************************
// Programa FreezeBoil
// Este programa calcula el punto medio entre
// los puntos de congelación y ebullición del agua
//******************************************************************
#include <iostream>

using namespace std;
const fl oat FREEZE_PT = 32.0; // Punto de congelación del agua
const fl oat BOIL_PT = 212.0; // Punto de ebullición del agua

int main(){
    fl oat avgTemp; // Contiene el resultado de promediar
    // FREEZE_PT y BOIL_PT
    cout << "El agua se congela a " << FREEZE_PT << endl;
    cout << "y hierve a " << BOIL_PT << "grados. " << endl;
    
    avgTemp = FREEZE_PT + BOIL_PT;
    avgTemp = avgTemp / 2.0;
    
    cout << "La mitad es " << avgTemp << " grados. " << endl;
return 0;
}

