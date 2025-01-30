#include <iostream>
using namespace std;
int main()
{
    char buffer[5]; 
    cin.read(buffer,5); 
    cout.write(buffer,10); 
    cout << endl; 
    cout.write(buffer,3); 
    cout << endl << "gcount "<< cin.gcount() << endl; 
    cout.write(buffer,cin.gcount());
    return 0;
}

