#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

using namespace std;

// Square is inherited from Rectangle
class Square : public Rectangle{
    // No new data members for SQUARE
    public:
        Square();

        Square(string, string, int, int);
        
        void set_width(float);
        void set_height(float);
};
#endif