#include <iostream>
#include "testApp.h"
#include "theOrb.h"


//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    orbR.setupRed();
    orbG.setupGreen();
    orbB.setupBlue();
    ofSetFrameRate(60);
    ofSetVerticalSync(TRUE);
}

//--------------------------------------------------------------
void testApp::update(){

    orbR.update();
    mouseDistR= ofDist(orbR.xPos, orbR.yPos, mouseX, mouseY);
    mouseDistG= ofDist(orbG.xPos, orbG.yPos, mouseX, mouseY);
    mouseDistB= ofDist(orbB.xPos, orbB.yPos, mouseX, mouseY);
}

//--------------------------------------------------------------
void testApp::draw(){

    orbR.drawRed();
    orbG.drawGreen();
    orbB.drawBlue();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
 //RED MOVEMENT
    
    if (mouseDistR<orbR.orbSize){
        
        if(pMouseX>orbR.xPos){
            
            orbR.xPos=mouseX-xDiff;
        }
        
        else if (pMouseX <=orbR.xPos){
            orbR.xPos=mouseX+xDiff;
        }
        
        
        if(pMouseY>orbR.yPos){
            
            orbR.yPos=mouseY-yDiff;
        }
        else if(pMouseY<=orbR.yPos){
            orbR.yPos=mouseY+yDiff;
        }
    }
    
    
    //GREEN MOVEMENT
    
    if (mouseDistG<orbG.orbSize){
        
        if(pMouseX>orbG.xPos){
            
            orbG.xPos=mouseX-xDiff;
        }
        
        else if (pMouseX <=orbG.xPos){
            orbG.xPos=mouseX+xDiff;
        }
        
        
        if(pMouseY>orbG.yPos){
            
            orbG.yPos=mouseY-yDiff;
        }
        else if(pMouseY<=orbG.yPos){
            orbG.yPos=mouseY+yDiff;
        }
    }
    
    //BLUE MOVEMENT
    
    if (mouseDistB<orbB.orbSize){
        
        if(pMouseX>orbB.xPos){
            
            orbB.xPos=mouseX-xDiff;
        }
        
        else if (pMouseX <=orbB.xPos){
            orbB.xPos=mouseX+xDiff;
        }
        
        
        if(pMouseY>orbB.yPos){
            
            orbB.yPos=mouseY-yDiff;
        }
        else if(pMouseY<=orbB.yPos){
            orbB.yPos=mouseY+yDiff;
        }
    }
    
    
    
    
   
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    if (mouseDistR<orbR.orbSize){
        pMouseX = x;
        pMouseY = y;
        xDiff=ofDist(pMouseX, 0, orbR.xPos, 0);
        yDiff=ofDist(0, pMouseY, 0, orbR.yPos);
        
    }
        if(mouseDistG<orbG.orbSize){
            pMouseX = x;
            pMouseY = y;
        
        xDiff=ofDist(pMouseX, 0, orbG.xPos, 0);
        yDiff=ofDist(0, pMouseY, 0, orbG.yPos);
        }
    
    if(mouseDistB<orbB.orbSize){
        pMouseX = x;
        pMouseY = y;
        xDiff=ofDist(pMouseX, 0, orbB.xPos, 0);
        yDiff=ofDist(0, pMouseY, 0, orbB.yPos);
        
        
    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}