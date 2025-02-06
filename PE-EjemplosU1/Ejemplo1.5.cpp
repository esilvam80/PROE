#include <iostream>

using namespace std;

int main(){
    char C;
    
    cout<<"Ingresa un caracter: \t";
    cin>>C;
    
    //Imprime un caracter
    cout.put('P').put('\n');
    
    //Imprime el caracter leido
    cout.put(C).put('\n').put('I').put('\n');
    
    //Imprimeun caracteres ASCII
    cout.put(64).put(99).put('\n');
    
    return 0;
}

