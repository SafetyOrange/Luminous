//
//  redOrb.h
//  Luminous
//
//  Created by Keion Anthony Marefat on 11/29/12.
//
//

#pragma once

class theGuy {
    
public: 
    void setupRed();
        void setupGreen();
        void setupBlue();
    void update();
    void drawRed();
    void drawGreen();
    void drawBlue();
    void shootBeam(int endX, int endY);
    
    int guySize;
    int guySpeed;
    int xPos;
    int yPos;
    
    int pMouseX;
    int pMouseY;
    
    bool beamTrue=false;
    
    

};
