#include "circle.h"

#include <iostream>
#include <math.h>

using namespace std;

// default constructor
Circle::Circle(){
    this->radius = 1;
}

// non-default constructor
Circle::Circle(float r){
    this->radius = r;
}

// destructor
Circle::~Circle(){
    this->radius = -1;
}

float Circle::get_radius(){
    return this->radius;
}

void Circle::set_radius(float r){
    this->radius = r;
}

float Circle::area(){
    return 2*M_PI*this->radius;
}

