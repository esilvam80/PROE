//Guess.cpp, El programa de adivinanzas usando do-while
#include <iostream>
using namespace std;

int main()
{
    int secret = 15;
    int guess; 
    //inicia en bucle
    do {
        cout << "Adivina un numero de dos digitos: ";
        cin >> guess;
    } while(guess != secret);
    cout << "Lo Lograste!" << endl;
}


