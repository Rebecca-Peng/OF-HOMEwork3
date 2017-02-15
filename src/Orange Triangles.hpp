//
//  Orange Triangles.hpp
//  Homework-3
//
//  Created by pfy on 2/15/17.
//
//

#ifndef Orange_Triangles_hpp
#define Orange_Triangles_hpp

#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework
class OrangeTriangles {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup();   // setup method, use this to setup your object's initial state
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    void catchUpSpeed(float speed);

    
    // variables
    float x;        // position
    float y;
    float speedY;   // speed and direction
    float speedX;
    ofColor color;  // color using ofColor type
    
    OrangeTriangles();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
};



#endif /* Orange_Triangles_hpp */
