//
//  Orange Triangles.cpp
//  Homework-3
//
//  Created by pfy on 2/15/17.
//
//

#include "Orange Triangles.hpp"
OrangeTriangles::OrangeTriangles(){
}

void OrangeTriangles::setup(){
    
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(-1, 1);
    
    
    color.set(250,ofRandom(50, 205),1);
}

void OrangeTriangles::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    catchUpSpeed(4);
}

void OrangeTriangles::draw(){
    ofSetColor(color);
    ofDrawTriangle(x,y,x + 10,y + 20,x -10 ,y + 20);
}

void OrangeTriangles::catchUpSpeed(float speed){
    
    x+=speedX * speed;
    y+=speedY * speed;
    
}


