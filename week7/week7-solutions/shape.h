#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

using namespace std;

class Shape{
    protected:
        const string name;
        string color;
    public:
        // should have constructors, accessors, mutators, as appropriate
        Shape();

        Shape(string, string);

        ~Shape();

        // accessors
        string get_name() const;
        string get_color() const;

        // mutators
        // void set_name(string):name();
        void set_color(string);

        void hello();
        
        // member functions
        float area();

};

#endif