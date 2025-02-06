#include <iostream>
using namespace std;
int main() {
    char operacion;
    double num1, num2;
    cout << "Bienvenido a la calculadora básica" << endl;
    cout << "Ingresa la operación que deseas realizar (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingresa el primer número: "; cin >> num1;
    cout << "Ingresa el segundo número: "; cin >> num2;

    switch (operacion) {
        case '+':
            cout<<"Resultado: "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Resultado: "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Resultado: "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            if (num2 != 0)
                cout<<"Resultado: "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            else 
                cout<<"Error: No se puede dividir entre cero."<<endl;
            break;
        default: cout << "Operación no válida (+, -, *, /)." << endl;
            break;
    }
    return 0;
}

