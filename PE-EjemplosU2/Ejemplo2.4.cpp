#include <iostream>
#includ<iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Introduca un numero decimal : ";
    cin >> n;
    cout << endl;
    cout << n << "en hexadecimal es: "
    << hex << n << "\n"
    << dec << n << " en octal es: "
    << oct << n << "\n"
    << setbase(10) << n << "en decimal es: "
    << n << endl;
    return 0;
}

