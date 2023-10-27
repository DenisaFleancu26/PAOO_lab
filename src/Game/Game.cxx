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

void Game::ChangePrice(float newPrice){
    this->price = newPrice;
}

void Game::SetDevelopers(std::string newDevelopers){
    this->developers = newDevelopers;
}

void Game::AddPlatform(std::string newPlatform){
    if(this->platforms.empty()){
        this->platforms = newPlatform;
    }else{
        this->platforms += ", " + newPlatform;
    }
}

void Game::DeletePlatform(std::string platform){
    size_t deleteP = this->platforms.find(platform);
    if(deleteP != std::string::npos){
        this->platforms = this->platforms.erase(deleteP, platform.length() + 2 );
    }
}

void Game::SetGenres(std::string newGenres){
    this->genres = newGenres;
}

void Game::GameInfo(){
    if(this->name != NULL)
        std::cout<< "Game: " << this->name << ", Developers: " << this->developers << ", Genres: " << this->genres << ", Platforms: " << this->platforms << ", Year: " << this->year << ", Price: $" << this->price << std::endl;
    else
        std::cout << "Oops! Game was moved!" << std::endl;
}
