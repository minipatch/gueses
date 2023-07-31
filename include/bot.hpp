#ifndef BOT_HPP
#define BOT_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class Bot{
    private:
        int _chute;

    public:
        Bot();

        void ChuteAlea();

        int getChute();
};




#endif