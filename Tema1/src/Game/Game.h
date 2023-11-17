#pragma once
#include <string>


class Game{
    private:
        char* name;
        std::string developers;
        std::string genres;
        std::string platforms;
        int year;
        float price;

    public:
        //Constructor
        Game(const char* name, const std::string developers, const std::string genres, const std::string platforms, int year, float price);   

        //Copy Constructor
        Game(const Game& copyGame);

        //Destructor
        ~Game(); 

        //Move Constructor
        Game(Game&& moveGame);

        void ChangePrice(float newPrice);
        void AddPlatform(std::string newPlatform);
        void DeletePlatform(std::string platform);
        void SetDevelopers(std::string newDevelopers);
        void SetGenres(std::string newGenres);
        void GameInfo();
};