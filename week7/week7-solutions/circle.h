#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

// Circle is inherited from Shape
class Circle : public Shape{
    private:
        float radius;
    public:
        Circle();
        Circle(float);

        ~Circle();

        float get_radius();

        void set_radius(float);
        
        float area();
};
#endif