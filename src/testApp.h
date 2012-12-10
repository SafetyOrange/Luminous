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
        void checkIntersect(int g1x, int g1y, int g2x, int g2y);
    
    theGuy guyR;
    theGuy guyG;
    theGuy guyB;
    
    int mouseDistR;          //The distance between the red orb and the mouse
    int mouseDistG;          //The distance between the green orb and the mouse
    int mouseDistB;          //The distance between the blue orb and the mouse
    
    int xDiff;              //The X difference between the selected orb and mouse
    int yDiff;              //The Y difference between the selected orb and mouse
    
    void interSection(int g1sX, int g1sY, int g1eX, int g1eY, int g2sX, int g2sY, int g2eX, int g2eY);
    
    int interX;
    int interY;
    
    bool redTrue;
    bool greenTrue;
    bool blueTrue;
    
    struct vertex
    {
        float x,z;
    };
    
    bool intersect (vertex v1, vertex v2, vertex p1, vertex p2);
    bool counter_clockwise(vertex p1, vertex p2, vertex p3);
    
    
    

};
