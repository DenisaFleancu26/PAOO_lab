#pragma once
#include "Console.h"

namespace Games{
    class PS3 : public Console{
        public:
            PS3(const char* gameName, float gamePrice, float gameSize, bool hasLag);
            
            void platformType() const override;
            void displayInfo() const override;
    };
};