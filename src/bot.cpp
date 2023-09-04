#include "bot.hpp"

Bot::Bot(){

}

void Bot::ChuteAlea() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 3);

    _chute = dist(gen); // Gera um número aleatório usando a distribuição e o gerador
}



int Bot::getChute(){
    return _chute;
}