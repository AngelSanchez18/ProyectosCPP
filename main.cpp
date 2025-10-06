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
    cout << "numero 1: " << number1 << "\tnumero 2: " << number2 << "\tsigno: " << simbol << endl;
    if (simbol == '+') {
        result = number1 + number2;
    } else if (simbol == '-') {
        result = number1 - number2;
    } else if (simbol == '*') {
        result = number1 * number2;
    } else if (simbol == '/') {
        if (number2 == 0) {
            cout << "Error: Division por cero." << endl;
            return 1;
        }
        result = (float)number1 / number2;
    } else {
        cout << "Operacion invalida." << endl;
        return 1;
    }
    cout << "El resultado es: " << result << endl;
    return 0;
}