#include <iostream>
using namespace std;
int main()
{
    char nota;
    cout << "Introduzca calificación (A-H) y pulse Intro:";
    cin >> nota;
    switch (nota) {
        case 'A': cout << "Excelente."<< "Examen superado\n";
                break;
        case 'B': cout << "Notable.";
                cout << "Suficiencia\n";
                break;
        case 'C': cout << "Aprobado\n";
                break;
        case 'D':
        case 'F': cout << "Suspendido\n";
                break;
        default:cout "no es posible esta nota";
    }
    cout << "Final de programa" << endl;
    return 0;
}