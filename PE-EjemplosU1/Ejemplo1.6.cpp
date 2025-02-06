#include <iostream>

using namespace std;

int main(){
    int grado, mayor_grado = -1;
    
    cout << "Introduzca calificacion (CTRL Z para terminar)\n";
    
    while (cin >> grado){
        if (grado > mayor_grado)
        mayor_grado=grado;
        cout << "\nIntroduzca calificacion (CTRL Z para terminar)\n";
    }
    cout << "\n”Mayor calificacion es : "<< mayor_grado << endl;
    return 0;
}

