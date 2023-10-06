#include <iostream>
#include <string>

using namespace std;


struct Voo {
    int numVoo;
    string origem;
    string destino;
    int tempoVoo;
    int horaSaida;
    int horaChegada;
    int horaEmbarque;


    int calcularHoraPartida() {
        // Implementar codigo
        
    }

    bool estaAtrasado() {
        // Implementar codigo
        
    }

    void exibirInformacoes() {
        // Implementar codigo

    }
};

int main() {
    
    Voo meuVoo;
    meuVoo.numVoo = 123;
    meuVoo.origem = "New York";
    meuVoo.destino = "Los Angeles";
    meuVoo.tempoVoo = 300;  
    meuVoo.horaSaida = 1000; 
    meuVoo.horaChegada = 1500; 
    meuVoo.horaEmbarque = 930; 


    meuVoo.exibirInformacoes();

    // Implementar codigo



    
    return 0;

}