#include "bot.hpp"

Bot::Bot(){

}

void Bot::ChuteAlea(){
    std::srand(std::time(0));

    _chute = std::rand() % 5;
}

int Bot::getChute(){
    return _chute;
}