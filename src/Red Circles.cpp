//
//  Red Circles.cpp
//  Homework-3
//
//  Created by pfy on 2/15/17.
//
//

#include "Red Circles.hpp"
RedCircles::RedCircles(){
}

void RedCircles::setup(){
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 1);           // and random speed and direction
    speedY = ofRandom(-1, 1);
    
    dim = 20;
    
    color.set(255,0,ofRandom(255));
}

void RedCircles::update(){
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
    
    catchUpSpeed(2.5);
}

void RedCircles::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}

void RedCircles::catchUpSpeed(float speed){
    
    x+=speedX * speed;
    y+=speedY * speed;
    
}

