#include <iostream>

using namespace std;

int fatorial(int n) {
         
    int resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
   
}

int main() {
    int numeros[] = {5, 7, 10}; 

    for (int i = 0; i < 3; ++i) {
        int numero = numeros[i];
        int fat = fatorial(numero);
        cout << "Fatorial de " << numero << " é " << fat << endl;
    }


    return 0;
}
