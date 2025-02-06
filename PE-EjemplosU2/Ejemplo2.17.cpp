#include <iostream>
using namespace std;
int main()
{
    int num_de_elementos, cuenta,calorias_por_alimento, 
    calorias_total;
    cout << "¿Cuantos alimentos ha comido hoy?:\t";
    cin >> num_de_elementos;
    calorias_total = 0;
    cuenta = 1;
    cout << "Introducir el numero de calorias de cada uno de los"
          << num_de_elementos << " alimentos tomados:\n";
    while (cuenta++ <= num_de_elementos){
        cout<<"Alumento "<<cuenta<<":\t"<<endl;
        cin >> calorias_por_alimento;
        calorias_total = calorias_total + calorias_por_alimento;
    }
    cout << "Las calorias totales consumidas hoy son = "
    << calorias_total << " Calorias"<<endl;
    return 0;
}
