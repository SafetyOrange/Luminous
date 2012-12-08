//
//  redOrb.cpp
//  Luminous
//
//  Created by Keion Anthony Marefat on 11/29/12.
//
//

#include "theOrb.h"
#include "ofMain.h"

void theOrb:: setupRed(){
    ofFill();
    orbSize = 30;
    orbSpeed = 5;
    
    xPos = ofGetWidth()/4;
    yPos = ofGetHeight()/2;
    
}


void theOrb:: setupGreen(){
    ofFill();
    orbSize = 30;
    orbSpeed = 5;
    
    xPos = (ofGetWidth()/4)*2;
    yPos = ofGetHeight()/2;
    
}


void theOrb:: setupBlue(){
    ofFill();
    orbSize = 30;
    orbSpeed = 5;
    
    xPos = (ofGetWidth()/4)*3;
    yPos = ofGetHeight()/2;
    
}

void theOrb:: drawRed(){
    ofSetColor(255,0,0);
    ofCircle(xPos,yPos, orbSize);
}

void theOrb:: drawGreen(){
    ofSetColor(0,255,0);
    ofCircle(xPos,yPos, orbSize);
}

void theOrb:: drawBlue(){
    ofSetColor(0,0,255);
    ofCircle(xPos,yPos, orbSize);
}



void theOrb:: update(){
    
}