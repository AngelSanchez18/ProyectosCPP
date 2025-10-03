#include <iostream>
using namespace std;
int main() {
    int number1 = 0, number2 = 0;
    char simbol;
    float result;
    cout << "Escribe tus numeros enteros: ";
    cin >> number1 >> number2;
    cout << "Ahora escribe tu signo de operacion (+, -, *, /): ";
    cin >> simbol;
    cout << "numero 1: " << number1 << "\tnumero 2: " << number2 << "\tsigno: " << simbol;
}
    