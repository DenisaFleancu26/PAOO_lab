#pragma once
#include "Platform.h"

namespace Games{
    class Console : public Platform{
        protected:
            char* gameName;
            float gamePrice;
            float gameSize;
            bool hasLag;
        public:
            Console(const char* gameName, float gamePrice, float gameSize, bool hasLag);
            ~Console();
            Console(const Console& copyconsole);
            Console(Console&& moveConsole);

            virtual void platformType() const override;
            virtual void displayInfo() const override;
            virtual void changePrice(float newPrice) override;

    };
};