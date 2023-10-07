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
        //Implementar
    }

    int divisao() {
        //Implementar
    }
};

int main() {
    Calculadora calc;

    
    cout << "Digite o primeiro numero inteiro: ";
    cin >> calc.num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> calc.num2;

    int escolha;
    
    cout << "Escolha a operacao:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cin >> escolha;


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

            resultado = calc.soma();
            cout << "Resultado da Soma: " << resultado << endl;
            break;
        case 2:
           resultado = calc.subtracao();
            cout << "Resultado da Subtracao: " << resultado << endl;
            break;

            //Implementar
        case 2:
           //Implementar

        case 3:
            //Implementar
        case 4:
            //Implementar
            break;
        default:

            cout << "Opcao invalida!" << endl;
            break;
    }

    return 0;

            //Implementar
    }

    return 0;
}


