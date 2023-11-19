#pragma once
#include "Platform.h"

namespace Games{
    class PC : public Platform{
        protected:
            char* gameName;
            float gamePrice;
            float gameSize;
        public:
            PC(const char* gameName, float gamePrice, float gameSize);
            ~PC();
            PC(const PC& copyPC);
            PC(PC&& movePC);

            virtual void platformType() const override;
            virtual void displayInfo() const override;
            virtual void changePrice(float newPrice) override;

    };
};