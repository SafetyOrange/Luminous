#include <iostream>
#include "testApp.h"
#include "theGuy.h"


//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(150, 150, 150);
    ofEnableSmoothing();
    orbR.setupRed();
    orbG.setupGreen();
    orbB.setupBlue();
    ofSetFrameRate(60);
    ofSetVerticalSync(TRUE);
    
    int rgDist = ofDist(orbR.xPos, orbR.yPos,orbG.xPos, orbG.yPos);
    int rbDist = ofDist(orbR.xPos, orbR.yPos,orbB.xPos, orbB.yPos);
    int gbDist = ofDist(orbG.xPos, orbG.yPos, orbB.xPos, orbB.yPos);
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
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
    
    if(key=='1'){
        redTrue=true;
        greenTrue=false;
        blueTrue=false;
    }
    
    
    
    if(key=='2'){
        redTrue=false;
        greenTrue=true;
        blueTrue=false;
    }
    
    
    
    
    if(key=='3'){
        redTrue=false;
        greenTrue=false;
        blueTrue=true;
    }
    


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    if(redTrue==true){
    orbR.pMouseX=mouseX;
    orbR.pMouseY=mouseY;
    orbR.beamTrue=true;
        cout<<"R = T"<<endl;
    } else if (redTrue==false){
       // orbR.beamTrue=false;
        cout<<"R = F"<<endl;
    }
    
    
    
    if(greenTrue==true){
        orbG.pMouseX=mouseX;
        orbG.pMouseY=mouseY;
        orbG.beamTrue=true;
        cout<<"G = T"<<endl;
    } else if (greenTrue==false){
      //  orbG.beamTrue=false;
        cout<<"G = F"<<endl;
    }
    
    
    if(blueTrue==true){
        orbB.pMouseX=mouseX;
        orbB.pMouseY=mouseY;
        orbB.beamTrue=true;
        cout<<"B = T"<<endl;
    } else if (blueTrue==false){
     //   orbB.beamTrue=false;
        cout<<"B = F"<<endl;
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