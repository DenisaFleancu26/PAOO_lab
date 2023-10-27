#include <iostream>
#include "Game.h"

int main() {
    
    Game game1("Mortal Kombat 11", "NetherRealm Studios", "Fighting", "Nintendo Switch, PlayStation 4, Xbox One", 2019, 49.99);
    Game game2("FIFA 23", "EA Vancouver, EA Romania", "Sports", "Nintendo Switch, PlayStation 4, PlayStation 5", 2022, 59.99);
    Game game3("Grand Theft Auto V", "Rockstar Games, Rockstar North", "Action-adventure", "PlayStation 3, Xbox 360, PlayStation 4, Xbox One", 2013, 39.99);

    game1.GameInfo();
    game2.GameInfo();
    game3.GameInfo();

    game1.ChangePrice(39.99);
    game1.AddPlatform("Windows");
    game1.GameInfo();
    
    return 0;
}