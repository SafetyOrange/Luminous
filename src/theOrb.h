//
//  redOrb.h
//  Luminous
//
//  Created by Keion Anthony Marefat on 11/29/12.
//
//

#pragma once

class theOrb {
    
public: 
    void setupRed();
        void setupGreen();
        void setupBlue();
    void update();
    void drawRed();
    void drawGreen();
    void drawBlue();
    
    int orbSize;
    int orbSpeed;
    int xPos;
    int yPos;
    

};
