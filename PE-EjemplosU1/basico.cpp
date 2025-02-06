/*
Considérese un ejemplo de un programa C++ con tres funciones 
principales: main, Square y Cube.
*/

#include <iostream>
using namespace std;

int Square( int );
int Cube( int );

int main() {
    cout << "El cuadrado de 27 es" << Square(27) << endl;
    cout << "y el cubo de 27 es " << Cube(27) << endl;
    return 0;
}

int Square( int n ){
    return n * n;
}

int Cube( int n ){
    return n * n * n;
}

