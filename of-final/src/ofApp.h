#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    
    
    void KoreaPressed();
    void NativeAmeriencaPressed();
    void ChinaPressed();
    void China2Pressed();
    void JapanPressed();
    void AmeriencaPressed();
    void MexicoPressed();
    void ItalyPressed();
    void IndiaPressed();
    void EgyptPressed();
    void AfricaPressed();
    
    ofVideoGrabber cam;
    ofxCv::ObjectFinder finder;
    ofImage korea;
    ofSoundPlayer sample;
    ofxPanel gui;
    
    
    ofxButton Korea;
    ofxButton NativeAmerienca;
    ofxButton China;
    ofxButton China2;
    ofxButton Japan;
    ofxButton Amerienca;
    ofxButton Mexico;
    ofxButton Italy;
    ofxButton India;
    ofxButton Egypt;
    ofxButton Africa;
 
    
    

};
