#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}


//--------------------------------------------------------------

void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int deltaX = ofMap(mouseX, 0, ofGetWidth(), 0, 50);  // change to 50
    int deltaY = ofMap(mouseY, 0, ofGetHeight(), 0, 50); // change to 50
    for (int y = 0; y < ofGetHeight(); y += 20 + deltaY) {  // change to 20
        for (int x = 0; x < ofGetWidth(); x += 20 + deltaX) { // change to 20
            int mouseDistX = abs(x - mouseX);
            int mouseDistY = abs(y - mouseX);
            int colorOffset = 0;
            if (mouseDistX < 100 && mouseDistY <100) {  // if mouseX is < 100 px away from a circle
                colorOffset = 100 + mouseDistX;
            }
            ofSetColor(colorOffset, x/5, y/5);
            ofDrawCircle(x, y, 20);
        }
    }

}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
    mouseX = x;  // x and y are locals or Òlocal variablesÓ
    mouseY = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
