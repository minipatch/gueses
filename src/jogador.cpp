#include "jogador.hpp"


Jogador::Jogador(std::string nome){
    this->_pontuacao=0;
    this->_nome=nome;
}

void Jogador::setchute(int chute){
    _chute = chute;
}

void Jogador::setpontuacao(){
    _pontuacao++;
}

int Jogador::getPont(){
    return _pontuacao;
}

int Jogador::getChute(){
    return _chute;
}


std::string Jogador::getNome(){
    return _nome;
}