#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    
    
    void ShadowPuppetPressed();
    void PapercutsPressed();
    void ColoredpapercutsPressed();
    void EmbroideryPressed();
    void WoodblockPrintsPressed();

    
    ofVideoGrabber cam;
    ofxCv::ObjectFinder finder;
    ofImage shadowPuppet;
    ofSoundPlayer sample;
    ofxPanel gui;
    
    
    ofxButton ShadowPuppet;
    ofxButton Papercuts;
    ofxButton Coloredpapercuts;
    ofxButton Embroidery;
    ofxButton WoodblockPrints;

    
    

};
