#include <iostream>

using namespace std;

int fatorial (int n){

    int fatorial = 1;

    for (int i=1; i<=n; i++){
        fatorial *=i;  
    } 

    return fatorial;
}

int main (){

    int num1, num2, num3;
    cout << "Digite 3 numeros para saber seu fatorial: " << endl;
    cin >> num1 >> num2 >> num3;

    cout << "Fatorial do numero " << num1 << " eh " << fatorial(num1) << endl;
    cout << "Fatorial do numero " << num2 << " eh " << fatorial(num2) << endl;
    cout << "Fatorial do numero " << num3 << " eh " << fatorial(num3) << endl;

    return 0;
}