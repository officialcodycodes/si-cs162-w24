#include "shape.h"
#include "rectangle.h"

#include <iostream>
#include <string>

using namespace std;

// default constructor
Rectangle::Rectangle(){
    this->width = 1;
    this->height = 1;
}

Rectangle::Rectangle(string name, string color, float w, float h) : Shape(name, color){
    
    this->width = w;
    this->height = h;
}

// destructor
Rectangle::~Rectangle(){
    this->width = -1;
    this->height = -1;
}

float Rectangle::get_width(){
    return this->width;
}

float Rectangle::get_height(){
    return this->height;
}

void Rectangle::set_width(float w){
    this->width = w;
}

void Rectangle::set_height(float h){
    this->height = h;
}

float Rectangle::area(){
    return this->width*this->height;
}
