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
      return horaEmbarque - tempoVoo;
        
    }

    bool estaAtrasado() {
        int horaAtual;  
        return horaAtual > horaChegada;
        
    }

    void exibirInformacoes() {
        cout << "Numero do Voo: " << numVoo << endl;
        cout << "Origem: " << origem << endl;
        cout << "Destino: " << destino << endl;
        cout << "Duração do Voo: " << tempoVoo << " minutos" << endl;
        cout << "Hora de Saida: " << horaSaida << endl;
        cout << "Hora de Chegada: " << horaChegada << endl;
        cout << "Hora de Embarque: " << horaEmbarque << endl;
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