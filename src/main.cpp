#include "jogador.hpp"
#include "bot.hpp"


int main(){

    std::string nome1,nome2;

    std::cout<<"digite nome do primeiro jogador"<<std::endl;

    std::cin>>nome1;

    std::cout<<"digite nome do segundo jogador"<<std::endl;


    std::cin>>nome2;

    Jogador j1(nome1);

    Jogador j2(nome2);
    
    Bot b1;
    
    while(j1.getPont()!=3||j2.getPont()!=3){
        b1.ChuteAlea();
        int valor = b1.getChute();

        int chute1,chute2;

        std::cout<<"qual valor gostaria de colocar? "<<nome1 <<std::endl;
        std::cin>>chute1;
        j1.setchute(chute1);

        std::cout<<"qual valor gostaria de colcoar? "<<nome2 <<std::endl;
        std::cin>>chute2;
        j2.setchute(chute2);

        std::cout<<"valor e "<<valor<<std::endl;


        if(j1.getChute() == valor){
            std::cout<<nome1<<" acertou"<<std::endl;
            j1.setpontuacao();
        }

        if(j2.getChute() == valor){
            std::cout<<nome2<<" acertou"<<std::endl;
            j2.setpontuacao();
        }

        else{
            std::cout<<"ninguem acertou"<<std::endl;
        }

    }
}