#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

// Rectangle is inherited from Shape
class Rectangle : public Shape{
    private:
        float width;
        float height;
    public:
        Rectangle();
        Rectangle(string, string, float, float);

        ~Rectangle();

        float get_width();
        float get_height();

        void set_width(float);
        void set_height(float);

        float area();
};
#endif