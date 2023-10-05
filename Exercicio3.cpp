#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
    int x;
    int y;
};

int distanciaPontos(Ponto &p1, Ponto &p2){

    int distancia;

    distancia = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    return distancia; 

}

int main (){

    Ponto ponto1;
    Ponto ponto2;
    int distancia;

    cout << "Digite ponto 1 do plano cartesiano (seguido de ENTER): " << endl;
    cin >> ponto1.x >> ponto1.y;
    cout << "Digite ponto 2 do plano cartesiano (seguido de ENTER): " << endl;
    cin >> ponto2.x >> ponto2.y;

    distancia = distanciaPontos(ponto1, ponto2);

    cout << "A distancia entre os pontos eh: " << distancia << endl;

    



    return 0;
}