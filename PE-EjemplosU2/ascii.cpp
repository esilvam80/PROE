//  Mostrar todos los caracteres ASCII
#include <iostream>
using namespace std;
int main() {
    
    for(int i = 1; i < 128; i++){
        if (i != 26) // ANSI Terminal Clear screen
            cout << "Valor: " << i
            << "\tCaracter: " << char(i) //Conversion
            << endl;
    }
    return 0;
}


