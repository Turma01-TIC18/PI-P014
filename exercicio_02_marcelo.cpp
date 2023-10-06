#include <iostream>

using namespace std;

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

void converterTemperatura() {
    double celsius, fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    

    fahrenheit = celsiusParaFahrenheit(celsius);

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << " graus Fahrenheit" << endl;
    cout << "" << endl;
}

int main() {

    converterTemperatura();
    converterTemperatura();
    converterTemperatura();

    cout << "" << endl;
    
    return 0;
}
