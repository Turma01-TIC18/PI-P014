#include <iostream>
#include <cmath>

using namespace std;

// Definição da struct Ponto
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    double dx = ponto2.x - ponto1.x;
    double dy = ponto2.y - ponto1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    // Criação de dois pontos
    Ponto pontoA;
    pontoA.x = 1.0;
    pontoA.y = 2.0;

    Ponto pontoB;
    pontoB.x = 4.0;
    pontoB.y = 6.0;

    // Calcula a distância entre os dois pontos
    double distancia = calcularDistancia(pontoA, pontoB);

    // Exibe o resultado
    cout << "A distância entre os pontos A(" << pontoA.x << ", " << pontoA.y << ") e B(" << pontoB.x << ", " << pontoB.y << ") é: " << distancia << endl;

    return 0;
}
