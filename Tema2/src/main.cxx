#include <iostream>
#include "Console.h"
#include "PC.h"
#include "Platform.h"
#include "PS3.h"
#include "PS4.h"

using namespace Games;

int main(){

    PC pc1("game1", 55.99, 100.0);
    pc1.platformType();

    PC pc2 = pc1;
    pc2.changePrice(60.00);
    pc2.displayInfo();

    Console console1("game2", 49.99, 90, false);
    console1.displayInfo();

    Console console2(std::move(console1));
    console2.changePrice(69.99);
    console2.displayInfo();

    Console console3("game4", 49.99, 90, false);
    console3 = console2;
    console3.displayInfo();

    console3 = PS3("game3", 39.99, 100, true);
    console3.gameHasLag();

    PS4 ps2("game5", 20.99, 50, true);
    ps2.changePrice(50.00);
    ps2.displayInfo();

    return 0;
}