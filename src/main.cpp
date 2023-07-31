#include "jogador.hpp"
#include "bot.hpp"
#include "fstream"


bool is_opcao(std::string opcao){
    if(opcao == "jogar"){
        return true;    
    }

    if(opcao == "historico"){
        return true;
    }

    else{
        return false;
    }
}




int main(){

    std::cout<<"bem vindo ao gueses"<<std::endl<<std::endl;

    std::cout<<"Deseja jogar ou acessar historico? "<<std::endl;

    std::string opcao = "jogar";


    while(is_opcao(opcao) == false){
        std::cin>>opcao;

        if(is_opcao(opcao) == false){
            std::cout<<"voce digitou uma opcao invalida"<<std::endl;
        }    
    }


    std::cout<<std::endl;



    if(opcao == "jogar"){
        std::string nome1="samira",nome2="silva";

        std::cout<<"digite nome do primeiro jogador"<<std::endl;

        std::getline(std::cin, nome1);

        std::cout<<"digite nome do segundo jogador"<<std::endl;


        std::getline(std::cin, nome1);

        Jogador j1(nome1);

        Jogador j2(nome2);
        
        Bot b1;
        

        int turno = 1;

        int chute1=0,chute2=0;


        while (j1.getPont() != 3 || j2.getPont() != 3) {

            std::cout<<"turno: "<< turno <<std::endl;

            b1.ChuteAlea();
            int valor = b1.getChute();


            std::cout<<"qual valor gostaria de colocar? "<<nome1 <<std::endl;
            
            while(chute1>3){
                std::cin>>chute1;
                if(chute1>3){
                    std::cout<<"coloque numero de 1 a 3"<<std::endl;
                }
            
            }
            
            j1.setchute(chute1);

            // std::cout<<"qual valor gostaria de colcoar? "<<nome2 <<std::endl;
            
            while(chute2>3){
                std::cin>>chute2;
                if(chute2>3){
                    std::cout<<"coloque numero de 1 a 3"<<std::endl;
                }
            }
            
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


            else if(j1.getChute() != valor && j2.getChute() != valor){
                std::cout<<"nenhum jogador ganhou nesse turno"<<std::endl;
            }



            if(j1.getPont() == 3){
                break;
            }

            if(j2.getPont() == 3){
                break;
            }
            

            turno+=1;
        }

        if(j1.getPont() == 3){
            std::cout<<nome1<<" ganhou"<<std::endl;
        }

        else if(j2.getPont() == 3){
            std::cout<<nome2<<" ganhou"<<std::endl;
        }


        std::ofstream file("ganhador");

        file<<"score of " << nome1 << ": "<< j1.getPont() <<std::endl;

        file<<"score of" << nome2 << ": "<< j2.getPont() <<std::endl;



        std::cout<<"a partida vai ser salva no historico"<<std::endl;
    }





    else if(opcao == "historico"){
        std::ifstream file("ganhador");

        if(!file){
            std::cerr<<"Erro ao abrir o arquivo."<<std::endl;
            return 1;
        }

        std::string linha;

        while(std::getline(file,linha)){
            std::cout<<linha<<std::endl;
        }

        file.close();
    }

}