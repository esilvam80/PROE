#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
    int power = 1;
    
    while (power <= 100000) {
        // Right justify each number in a field 10 wide, or right/left
       //cout.setf(ios::showpoint); para flotantes
       //cout.setf(ios::scientific, ios::flotfield); para notacion cientifica
       //setprecision(5): para flotantes
       //cout.fill('+'); para caracter de relleno
//cout.imbue(std::locale(""));
       cout << setw(15) << power << "\n";
        power *= 10;
    }
    return 0;
}