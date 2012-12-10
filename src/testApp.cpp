#include <iostream>
#include "testApp.h"
#include "theGuy.h"


//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(150, 150, 150);
    ofEnableSmoothing();
    guyR.setupRed();
    guyG.setupGreen();
    guyB.setupBlue();
    ofSetFrameRate(60);
    ofSetVerticalSync(TRUE);
    
    doitSect1=false;
    doitSectX=false;
    doitSectY=false;
    
    int rgDist = ofDist(guyR.xPos, guyR.yPos,guyG.xPos, guyG.yPos);
    int rbDist = ofDist(guyR.xPos, guyR.yPos,guyB.xPos, guyB.yPos);
    int gbDist = ofDist(guyG.xPos, guyG.yPos, guyB.xPos, guyB.yPos);
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    mouseDistR= ofDist(guyR.xPos, guyR.yPos, mouseX, mouseY);
    mouseDistG= ofDist(guyG.xPos, guyG.yPos, mouseX, mouseY);
    mouseDistB= ofDist(guyB.xPos, guyB.yPos, mouseX, mouseY);
    
}

//--------------------------------------------------------------
void testApp::draw(){

    guyR.drawRed();
    guyG.drawGreen();
    guyB.drawBlue();
    
    cout<< interX << ", " << interY << endl;
    
    //interSection(guyR.xPos, guyR.pMouseX, guyR.yPos, guyR.pMouseY, guyG.xPos, guyG.pMouseX, guyG.yPos, guyG.pMouseY);
    //interSection(guyG.xPos, guyG.pMouseX, guyG.yPos, guyG.pMouseY, guyB.xPos, guyB.pMouseX, guyB.yPos, guyB.pMouseY);
    interSection(guyR.xPos, guyR.pMouseX, guyR.yPos, guyR.pMouseY, guyB.xPos, guyB.pMouseX, guyB.yPos, guyB.pMouseY);
    
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
    
    if(redTrue==true){
        guyR.pMouseX=x;
        guyR.pMouseY=y;
        guyR.beamTrue=true;

    }
    
    
    
    if(greenTrue==true){
        guyG.pMouseX=x;
        guyG.pMouseY=y;
        guyG.beamTrue=true;

    } 
    
    
    if(blueTrue==true){
        guyB.pMouseX=x;
        guyB.pMouseY=y;
        guyB.beamTrue=true;
            }
    
    
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    if(redTrue==true){
    guyR.pMouseX=mouseX;
    guyR.pMouseY=mouseY;
    guyR.beamTrue=true;
        cout<<"R = T"<<endl;
    } else if (redTrue==false){
       // guyR.beamTrue=false;
        cout<<"R = F"<<endl;
    }
    
    
    
    if(greenTrue==true){
        guyG.pMouseX=mouseX;
        guyG.pMouseY=mouseY;
        guyG.beamTrue=true;
        cout<<"G = T"<<endl;
    } else if (greenTrue==false){
      //  guyG.beamTrue=false;
        cout<<"G = F"<<endl;
    }
    
    
    if(blueTrue==true){
        guyB.pMouseX=mouseX;
        guyB.pMouseY=mouseY;
        guyB.beamTrue=true;
        cout<<"B = T"<<endl;
    } else if (blueTrue==false){
     //   guyB.beamTrue=false;
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
//--------------------------------------------------------------
void testApp::interSection(int g1sX, int g1eX, int g1sY, int g1eY, int g2sX, int g2eX, int g2sY, int g2eY){
    
        // Store the values for fast access and easy
        // equations-to-code conversion
        float x1 = g1sX, x2 = g1eX, x3 = g2sX, x4 = g2eX;
        float y1 = g1sY, y2 = g1eY, y3 = g2sY, y4 = g2eY;
        
        float d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
        // If d is zero, there is no intersection
    if (d == 0) {doitSect1=false;}
    if (d!=0) {doitSect1=true;}
        
        // Get the x and y
        float pre = (x1*y2 - y1*x2), post = (x3*y4 - y3*x4);
        float x = ( pre * (x3 - x4) - (x1 - x2) * post ) / d;
        float y = ( pre * (y3 - y4) - (y1 - y2) * post ) / d;
        
        // Check if the x and y coordinates are within both lines
        if ( x <= min(x1, x2) || x >= max(x1, x2) ||
            x <= min(x3, x4) || x >= max(x3, x4) ) {doitSectX=false;}
        else if (x > min(x1, x2) || x > max(x1, x2) ||
                 x < min(x3, x4) || x < max(x3, x4)){doitSectX=true;}
                 
        if ( y <= min(y1, y2) || y >= max(y1, y2) ||
            y <= min(y3, y4) || y >= max(y3, y4) ) {doitSectY=false;}
        else if ( y > min(y1, y2) || y < max(y1, y2) ||
                 y > min(y3, y4) || y < max(y3, y4) ){doitSectY=true;}
        
        // Return the point of intersection
     //   Point* ret = new Point();
    
    if(doitSect1&&doitSectX&&doitSectY==true){
        interX=x;
        interY=y;
    }
    else if(doitSect1||doitSectX||doitSectY==false){
        interX=0;
        interY=0;
    }
    
    }