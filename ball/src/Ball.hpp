//
//  Ball.hpp
//  GraphicsPrimitives
//
//  Created by pfy on 2/15/17.
//
//

#ifndef Ball_hpp
#define Ball_hpp
#include "ofMain.h"

#include <stdio.h>

class Ball {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup();   // setup method, use this to setup your object's initial state
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    // variables
    float x;        // position
    float y;
    float speedY;   // speed and direction
    float speedX;
    int dim;        // size
    ofColor color;  // color using ofColor type
    
    Ball();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
}; // don't forget the semicolon!

#endif /* Ball_hpp */
