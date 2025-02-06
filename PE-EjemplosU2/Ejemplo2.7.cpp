#include <iostream>
using namespace std;
int main()
{
    int n,d;
    cout "Introduzca dos enteros:";
    cin >> n;
    cin >> d;
    
    // comparar numero a cero
    if (n%d==0)
        cout << n << "es divisible por " << d <<endl;
    
    return 0;
}

