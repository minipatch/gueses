#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <iostream>
#include <string>

class Jogador{
    private:
        int _pontuacao;
        int _chute;

        std::string _nome;


    public:

        Jogador(std::string nome);

        void setchute(int chute);

        int getPont();

        int getChute();

        std::string getNome();

        void setpontuacao();
};





#endif