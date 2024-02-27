#include "square.h"

#include <iostream>

using namespace std;

Square::Square() : Rectangle(){
    
}

Square::Square(string n, string j, int b, int h) : Rectangle(n, j, b, h){
    
}


void Square::set_width(float w){
    Rectangle::set_width(w);
}

void Square::set_height(float h){
    Rectangle::set_height(h);
}