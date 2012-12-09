#pragma once

#include "ofMain.h"
#include "theGuy.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    theGuy orbR;
    theGuy orbG;
    theGuy orbB;
    
    int mouseDistR;          //The distance between the red orb and the mouse
    int mouseDistG;          //The distance between the green orb and the mouse
    int mouseDistB;          //The distance between the blue orb and the mouse
    
    int xDiff;              //The X difference between the selected orb and mouse
    int yDiff;              //The Y difference between the selected orb and mouse
    
    bool redTrue;
    bool greenTrue;
    bool blueTrue;
    
    
    ofVbo vbo;
    ofShader shader;
    ofEasyCam camera;
    
    float camDist;
    
    ofTexture texture;

};
