#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct Ponto 
{
    int x;
    int y;
};

double coordenadas(Ponto &a,  Ponto &b) {
    
    
    double deltaA = a.x - b.x;
    double deltaB = a.y - b.y;
    
    return  sqrt((deltaA * deltaA) + (deltaB * deltaB));    

}

int main()
{
    Ponto pontoA, pontoB;
    double distancia;

    cout << "Informe as coordenadas x do PontoA: ";
    cin >> pontoA.x;
    cout << "Informe as coordenadas y do PontoB: ";
    cin >> pontoA.y;
    cout << "Informe as coordenadas x do PontoA: ";
    cin >> pontoB.x;
    cout << "Informe as coordenadas y do PontoB: ";
    cin >> pontoB.y;
    distancia = coordenadas(pontoA,pontoB);

    cout << "As coordenada A e B é: " << distancia << endl;

    return 0;
}