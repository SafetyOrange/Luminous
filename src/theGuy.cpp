//
//  redOrb.cpp
//  Luminous
//
//  Created by Keion Anthony Marefat on 11/29/12.
//
//

#include "theGuy.h"
#include "ofMain.h"

void theGuy:: setupRed(){
    ofFill();
    guySize = 30;
    guySpeed = 5;
    
    xPos = ofGetWidth()/4;
    yPos = ofGetHeight()/2;
    
}


void theGuy:: setupGreen(){
    ofFill();
    guySize = 30;
    guySpeed = 5;
    
    xPos = (ofGetWidth()/4)*2;
    yPos = ofGetHeight()/2;
    
}


void theGuy:: setupBlue(){
    ofFill();
    guySize = 30;
    guySpeed = 5;
    
    xPos = (ofGetWidth()/4)*3;
    yPos = ofGetHeight()/2;
    
}

void theGuy:: drawRed(){
    ofSetColor(255,0,0);
    ofCircle(xPos,yPos, guySize);
    
    if(beamTrue==true){
        shootBeam(pMouseX, pMouseY);
    }
}

void theGuy:: drawGreen(){
    ofSetColor(0,255,0);
    ofCircle(xPos,yPos, guySize);
    
    if(beamTrue==true){
        shootBeam(pMouseX, pMouseY);
    }
    
}

void theGuy:: drawBlue(){
    ofSetColor(0,0,255);
    ofCircle(xPos,yPos, guySize);
    
    if(beamTrue==true){
        shootBeam(pMouseX, pMouseY);
    }

}



void theGuy:: update(){
    
    
}

void theGuy:: shootBeam(int endX, int endY){
    ofSetLineWidth(50);
    ofLine(xPos, yPos, endX, endY);
}