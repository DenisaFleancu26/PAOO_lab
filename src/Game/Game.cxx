#include <iostream>
#include <string.h>
#include "Game.h"


Game::Game(const char* name, const std::string developers, const std::string genres, const std::string platforms, int year, float price){
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->developers = developers;
    this->genres = genres;
    this->platforms = platforms;
    this->year = year;
    this->price = price;
    std::cout << "Game has been created!" << std::endl;
}

