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


    int horaPartida = meuVoo.calcularHoraPartida();
    cout << "Hora de Partida: " << horaPartida << endl;

    bool atrasado = meuVoo.estaAtrasado();

    if (atrasado) {
        cout << "O voo está atrasado." << endl;
    } 
    else {
        cout << "O voo estah no horario previsto." << endl;

    }



    
    return 0;



}