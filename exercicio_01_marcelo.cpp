#include <iostream>

using namespace std;


unsigned long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;
    cout << "Informe um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
    } else {
        unsigned long long resultado = calcularFatorial(numero);
        cout << "O fatorial de " << numero << " é " << resultado << endl;
    }

    return 0;
}
