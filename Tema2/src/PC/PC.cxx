#include "PC.h"
#include <iostream>
#include <string.h>
using namespace Games;

PC::PC(const char* gameName, float gamePrice, float gameSize){
    this->gameName = new char[strlen(gameName) + 1];
    strcpy(this->gameName, gameName);
    this->gamePrice = gamePrice;
    this->gameSize = gameSize;

    std::cout << "PC platform created!" << std::endl;
}

PC::~PC(){
    delete[] this->gameName;
    std::cout << "PC platform deleted!" << std::endl;
}

PC::PC(const PC& copyPC){
    this->gameName = new char[strlen(copyPC.gameName) + 1];
    strcpy(this->gameName, copyPC.gameName);
    this->gamePrice = copyPC.gamePrice;
    this->gameSize = copyPC.gameSize;

    std::cout << "PC platform has been copied!" << std::endl;
}

PC::PC(PC&& movePC){
    this->gameName =  movePC.gameName;
    this->gamePrice = movePC.gamePrice;
    this->gameSize = movePC.gameSize;

    movePC.gameName = nullptr;
    movePC.gamePrice = 0.0;
    movePC.gameSize = 0.0;

    std::cout << "PC platform has been moved!" << std::endl;
}

void PC::platformType() const {
    std::cout<< "Platform type: PC" << std::endl;
}

void PC::displayInfo() const {
      if(this->gameName != nullptr){
        std::cout << "For PC, " << this->gameName << " costs $" << this->gamePrice << " and requires " << this->gameSize << "GB of storage space." << std::endl;
    }
}

void PC::changePrice(float newPrice){
    this->gamePrice = newPrice;
}