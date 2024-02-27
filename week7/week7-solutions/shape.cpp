#include "shape.h"

#include <iostream>
#include <string>

using namespace std;

// default constructor
Shape::Shape():name("shape"){
    //this->name = "shape";
    this->color = "white";
}

Shape::Shape(string n, string c):name(n){
    //this->name = name;
    this->color = c;
}

// Destructor
Shape::~Shape(){
    cout << "~Shape()" << endl;
    // this->string = NULL;
    // this->color = NULL;
}

// Accessors
string Shape::get_name() const{
    return this->name;
}

string Shape::get_color() const{
    return this->color;
}

// Mutators
// void Shape::set_name(string new_name):name(new_name){
//     this->name;
// }

void Shape::set_color(string new_color){
    this->color = new_color;
}

void Shape::hello(){
    cout << "Do something " << endl;
}

// Member functions
float Shape::area(){
    return 0;
}

