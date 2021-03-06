#pragma once

#include "ofMain.h"
#include "Ball.hpp"
#define NBALLS 5
#include "Red Circles.hpp"
#define NRED 10
#include "Orange Triangles.hpp"
#define NORA 20


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        Ball myBall[NBALLS];
        RedCircles myRedCircles[NRED];
        OrangeTriangles myOrangeTriangles[NORA];
};
