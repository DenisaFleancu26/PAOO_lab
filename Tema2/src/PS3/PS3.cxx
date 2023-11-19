#include "PS3.h"
#include <iostream>
#include <string.h>
using namespace Games;

PS3::PS3(const char* gameName, float gamePrice, float gameSize, bool hasLag) : Console(gameName, gamePrice, gameSize, hasLag){
  std::cout << "PS3 platform created!" << std::endl;
}

void PS3::platformType() const {
    std::cout<< "Platform type: PS3" << std::endl;
}

void PS3::displayInfo() const {
     if(this->gameName != nullptr){
        std::cout << "For PS3, " << this->gameName << " costs $" << this->gamePrice << " and requires " << this->gameSize << "GB of storage space." << std::endl;
    }
}

