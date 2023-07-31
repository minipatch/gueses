#include "bot.hpp"

Bot::Bot(){

}

void Bot::ChuteAlea(){
    std::srand(std::time(0));
    while(_chute == 0){
        _chute = std::rand() % 3;
    }
}

int Bot::getChute(){
    return _chute;
}