#include "ofApp.h"

ofFbo fbo;

//--------------------------------------------------------------
void ofApp::setup(){
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
   
    for(int i=0; i<NBALLS; i++){
        myBall[i].setup();
    }
    
    for(int i=0; i<NRED; i++){
        myRedCircles[i].setup();
    }
    
    for(int i=0; i<NORA; i++){
        myOrangeTriangles[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
    
    for(int i=0; i<NBALLS; i++){
        myBall[i].update();
    }
    
    for(int i=0; i<NRED; i++){
        myRedCircles[i].update();
    }
    
    
    for(int i=0; i<NORA; i++){
        myOrangeTriangles[i].update();
    }
    
   


}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,0,0,10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(0,0,255);

    
    for(int i=0; i<NBALLS; i++){
        myBall[i].draw();
    }

    for(int i=0; i<NRED; i++){
        myRedCircles[i].draw();
    }
    
    for(int i=0; i<NORA; i++){
        myOrangeTriangles[i].draw();
    }
    
    fbo.end();
 
    ofSetColor(255,255,255);
    fbo.draw(0,0);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
