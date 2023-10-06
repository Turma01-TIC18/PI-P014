#include <iostream>

using namespace std;

// Função para calcular o fatorial de um número inteiro
unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        cout << "Nao eh possível calcular o fatorial de um numero negativo." << endl;
        return 0;
    }

    unsigned long long resultado = 1;
    for (int i = 1; i <= numero; ++i) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero1 = 5;
    int numero2 = 7;
    int numero3 = 10;

    // Calcula e exibe o fatorial dos três números
    cout << "Fatorial de " << numero1 << " eh " << calcularFatorial(numero1) << endl;
    cout << "Fatorial de " << numero2 << " eh " << calcularFatorial(numero2) << endl;
    cout << "Fatorial de " << numero3 << " eh " << calcularFatorial(numero3) << endl;

    return 0;
}
