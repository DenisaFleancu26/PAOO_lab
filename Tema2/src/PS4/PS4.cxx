#include "PS4.h"
#include <iostream>
#include <string.h>
using namespace Games;

PS4::PS4(const char* gameName, float gamePrice, float gameSize, bool hasLag) : Console(gameName, gamePrice, gameSize, hasLag){
  std::cout << "PS4 platform created!" << std::endl;
}

void PS4::platformType() const {
    std::cout<< "Platform type: PS4" << std::endl;
}

void PS4::displayInfo() const {
      if(this->gameName != nullptr){
        std::cout << "For PS4, " << this->gameName << " costs $" << this->gamePrice << " and requires " << this->gameSize << "GB of storage space." << std::endl;
    }
}


