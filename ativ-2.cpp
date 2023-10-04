#include <iostream>

using namespace std;


double celsiusFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}


void converter() {
    double celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusFahrenheit(celsius);

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F" << endl;
}

int main() {
    int numTestes = 3; 

    do {
        converter();

        --numTestes;


    }while(numTestes > 0);
    

    
    return 0;
}
