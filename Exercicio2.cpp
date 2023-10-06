#include <iostream>

using namespace std;

float celsiusToFahrenheit(int tC){

    float tF;

    tF = (tC * 1.8) + 32;

    return tF;

}

void mostrar(){

    float tempC;

    cout << "Digite a temperatura em Celsius para ser convertida em Fahrenheit: " << endl;
    cin >> tempC;

    cout << "Temperatura em Fahrenheit: " << celsiusToFahrenheit(tempC) << endl;;
}

int main (){

    mostrar();



    return 0;
}