#include <iostream>

using namespace std;


struct Calculadora {
    int num1;
    int num2;

    int soma() {
        return num1 + num2;
    }

    int subtracao() {
        return num1 - num2;
    }

    int multiplicacao() {
        return num1 * num2;
    }

    int divisao() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculadora calc;

   int escolha;
    
    cout << "Escolha a operação:" << endl;
    cout << "" << endl;

    cout << "1. Soma" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "" << endl;
    
    cout << "Digite o primeiro número inteiro: ";
    cin >> calc.num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> calc.num2;
    cin >> escolha;

    int resultado;

    switch (escolha) {
        case 1:
            resultado = calc.soma();
            cout << "Resultado da Soma: " << resultado << endl;
            break;
        case 2:
            resultado = calc.subtracao();
            cout << "Resultado da Subtração: " << resultado << endl;
            break;
        case 3:
            resultado = calc.multiplicacao();
            cout << "Resultado da Multiplicação: " << resultado << endl;
            break;
        case 4:
            resultado = calc.divisao();
            if (resultado != 0) {
                cout << "Resultado da Divisão: " << resultado << endl;
            }
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
    }

    return 0;
}
