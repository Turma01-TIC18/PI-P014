#include <iostream>

using namespace std; 

double adicao(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Divisao por zero" << endl;
        return 0.0; 
    }
}

int main() {
    char operador;
    double num1, num2;

    cout << "Digite um operador (+, -, *, /): ";
    cin >> operador;

    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;

    double resultado;

    switch (operador) {
        case '+':
            resultado = adicao(num1, num2);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            break;
        case '/':
            resultado = divisao(num1, num2);
            break;
        default:
            cout << "Operador invalido!" << endl;
            return 1; 
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
