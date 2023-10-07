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
        //Implementar
    }

    int divisao() {
        //Implementar
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
            //Implementar
        case 4:
            //Implementar
            break;
        default:
            //Implementar
    }

    return 0;
}
