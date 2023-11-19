#pragma once
#include "Console.h"

namespace Games{
    class PS4 : public Console{
        public:
            PS4(const char* gameName, float gamePrice, float gameSize, bool hasLag);
            
            void platformType() const override;
            void displayInfo() const override;
             
    };
};