#include <iostream>

using namespace std;


struct Calculadora {
    int num1;
    int num2;

    int soma() {
        // Implementar 
    }

    int subtracao() {
        //Implementar
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

    
    cout << "Digite o primeiro número inteiro: ";
    cin >> calc.num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> calc.num2;

    int escolha;
    
    cout << "Escolha a operação:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cin >> escolha;

    int resultado;

    
    switch (escolha) {
        case 1:
            //Implementar
        case 2:
           //Implementar
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

