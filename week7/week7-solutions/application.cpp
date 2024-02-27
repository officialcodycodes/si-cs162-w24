#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Shape s("something", "red");
    cout << s.get_name() << " with color " << s.get_color() << endl;
    
    // Rectangle r;
    Rectangle r("Long Box", "Blue ", 5, 3);
    cout << r.get_name() << r.get_color() << r.get_width() << r.get_height() << endl;
    
    Circle c(5);
    cout << "Circle: " << c.get_radius() << endl;

    cout << "The Long Box's 5x3 area: " << r.area() << endl;

    cout << "Circles area of radius 5: " << c.area() << endl;


    Square sq;
    cout << sq.get_width() << " by " << sq.get_height() << endl;

    // Square sq2(2, 2);
    // cout << sq2.get_width() << " by " << sq2.get_height() << endl;

    Square sq3("Wallet", "Brown", 2, 2);
    cout << sq3.get_name() << " " << sq3.get_color() << " " << sq3.get_width() << " by " << sq3.get_height() << endl;

    return 0;
}