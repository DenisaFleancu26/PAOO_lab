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

};