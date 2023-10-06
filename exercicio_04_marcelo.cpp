#include <iostream>

using namespace std;

int main() {
    char operador;
    double numero1, numero2;

    cout << "Calculadora de Operações Matemáticas" << endl;
    cout << "-----------------------------------" << endl;
    cout << "" << endl;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operador;
    cout << "" << endl;
    
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    double resultado;

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Erro: divisão por zero não é permitida." << endl;
                return 1;  
            }
            break;
        default:
            cout << "Operador inválido." << endl;
            return 1;  
    }
   
    cout << "" << endl;
    cout << "Resultado: " << resultado << endl;
    cout << "" << endl;
    return 0;
}