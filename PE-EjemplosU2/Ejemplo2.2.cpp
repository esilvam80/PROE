#include <iostream>
using namespace std;
int main()
{
    char arr[10];
    cin.ignore(5);
    cin.get(arr,10,'\n');
    cout << arr;
    return 0;
}

