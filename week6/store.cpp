#include "store.h"

#include <iostream>
using namespace std;

// Default constructor
Store::Store(){
    this->jackets = 0;
    this->shirts = 0;
    this->pants = 0;

    this->num_brands = 0;
    this->brands = NULL;
}

// Non-default constructor
Store::Store(int j, int s, int p, int num_brands, string* brands){

    // Remember to initialize this->brands from the array in MAIN

}

/* The Big 3 */
Store::~Store(){  // Destructor
    
}

Store& Store::operator=(const Store& s){ // AOO

    // member-wise copy
    
    // free memory
    

    // Deep copy
    

    return *this;

}

Store::Store(const Store& s){ // Copy Constructor
    // member-wise copy
    
    // Deep Copy
    
    
}

// If you have time... make a function that prints out the store's inventory