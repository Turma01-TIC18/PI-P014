#include <iostream>

using namespace std;

// Função para converter Celsius para Fahrenheit
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Função para lidar com entrada e saída
void converterTemp() {
    double celsius, fahrenheit;

    // Solicita ao usuário a temperatura em Celsius
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    // Chama a função de conversão
    fahrenheit = celsiusParaFahrenheit(celsius);

    // Exibe o resultado
    cout << "A temperatura em Fahrenheit eh: " << fahrenheit << " graus Fahrenheit" << endl;
}

int main() {
    // Teste a função de conversão com diferentes valores
    converterTemp();
    return 0;
}
