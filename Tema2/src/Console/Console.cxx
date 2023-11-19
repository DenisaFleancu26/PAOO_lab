#include "Console.h"
#include <iostream>
#include <string.h>
using namespace Games;

Console::Console(const char* gameName, float gamePrice, float gameSize, bool hasLag){
    this->gameName = new char[strlen(gameName) + 1];
    strcpy(this->gameName, gameName);
    this->gamePrice = gamePrice;
    this->gameSize = gameSize;
    this->hasLag = hasLag;

    std::cout << "Console platform created!" << std::endl;
}

Console::~Console(){
    delete[] this->gameName;
    std::cout << "Console platform deleted!" << std::endl;
}

Console::Console(const Console& copyConsole){
    this->gameName = new char[strlen(copyConsole.gameName) + 1];
    strcpy(this->gameName, copyConsole.gameName);
    this->gamePrice = copyConsole.gamePrice;
    this->gameSize = copyConsole.gameSize;
    this->hasLag = copyConsole.hasLag;

    std::cout << "Console platform has been copied!" << std::endl;
}

Console::Console(Console&& moveConsole){
    this->gameName =  moveConsole.gameName;
    this->gamePrice = moveConsole.gamePrice;
    this->gameSize = moveConsole.gameSize;
    this->hasLag = moveConsole.hasLag;

    moveConsole.gameName = nullptr;
    moveConsole.gamePrice = 0.0;
    moveConsole.gameSize = 0.0;
    moveConsole.hasLag = false;

    std::cout << "Console platform has been moved!" << std::endl;
}

void Console::platformType() const {
    std::cout<< "Platform type: Console" << std::endl;
}

void Console::displayInfo() const {
    if(this->gameName != nullptr){
        std::cout << "For Console, " << this->gameName << " costs $" << this->gamePrice << " and requires " << this->gameSize << "GB of storage space." << std::endl;
    }
}

void Console::changePrice(float newPrice){
    this->gamePrice = newPrice;
}

void Console::gameHasLag() const {
    if(this->hasLag == true){
        std::cout << "Game has lags!" << std::endl;
    } else {
        std::cout << "Game has no lags!" << std::endl;
    }
}