#pragma once

namespace Games {
    class Platform {
        public:
            virtual void platformType() const = 0; 
            virtual void displayInfo() const = 0;  
            virtual void changePrice(float newPrice) = 0; 
    };
};