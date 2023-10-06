#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    double x;
    double y;
};


double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    double diferencaX = ponto1.x - ponto2.x;
    double diferencaY = ponto1.y - ponto2.y;
    return sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}

int main() {

    Ponto pontoA;
    pontoA.x = 3.0;
    pontoA.y = 4.0;

    Ponto pontoB;
    pontoB.x = 6.0;
    pontoB.y = 8.0;


    double distancia = calcularDistancia(pontoA, pontoB);

    cout << "A distancia entre os pontos eh: " << distancia << std::endl;

    return 0;
}
