#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

void ofApp::setup() {
    ofSetVerticalSync(true);
    //ofToggleFullscreen();
    ofSetFrameRate(120);
    finder.setup("haarcascade_frontalface_default.xml");
    finder.setPreset(ObjectFinder::Fast);
    finder.getTracker().setSmoothingRate(.3);
    cam.setup(640*2,480*2);
    //sunglasses.load("sunglasses.png");
    
    ofEnableAlphaBlending();
    
    
   
    
    ShadowPuppet.addListener(this, &ofApp::ShadowPuppetPressed);
    Papercuts.addListener(this, &ofApp::PapercutsPressed);
    Coloredpapercuts.addListener(this, &ofApp::ColoredpapercutsPressed);
    Embroidery.addListener(this, &ofApp::EmbroideryPressed);
    WoodblockPrints.addListener(this, &ofApp::WoodblockPrintsPressed);
 
                     
    gui.setup();
    gui.add(ShadowPuppet.setup("Shadow Puppet"));
    gui.add(Papercuts.setup("Papercuts"));
    gui.add(Coloredpapercuts.setup("Colored Papercuts"));
    gui.add(Embroidery.setup("Embroidery"));
    gui.add(WoodblockPrints.setup("Woodblock Prints"));
   
    
    
    
    sample.loadSound("4.mp3");
    sample.play();
    
    
    
}

void ofApp::update() {
    cam.update();
    if(cam.isFrameNew()) {
        finder.update(cam);
    }
}

void ofApp::draw() {
    cam.draw(0, 0,1280,960);
    
    for(int i = 0; i < finder.size(); i++) {
        ofRectangle object = finder.getObjectSmoothed(i);
        shadowPuppet.setAnchorPercent(.51, .3);
        float scaleAmount = 5 * object.width / shadowPuppet.getWidth();
        ofPushMatrix();
        ofTranslate(object.x + object.width / 2., object.y + object.height * .42);
        ofScale(scaleAmount, scaleAmount);
        shadowPuppet.draw(0, 0);
        ofPopMatrix();
        ofPushMatrix();
        ofTranslate(object.getPosition());
        ofDrawBitmapStringHighlight(ofToString(finder.getLabel(i)), 0, 0);
        ofDrawLine(ofVec2f(), toOf(finder.getVelocity(i)) * 10);
        ofPopMatrix();
    }
    gui.draw();
    
}

    
void ofApp::ShadowPuppetPressed(){
    
    shadowPuppet.load("Shadow Puppet.png");
   

    
}

void ofApp::PapercutsPressed(){
    
    shadowPuppet.load("Papercuts.png");
}


void ofApp::ColoredpapercutsPressed(){
    
    shadowPuppet.load("Colored papercuts.png");
}

void ofApp::EmbroideryPressed(){
    
    shadowPuppet.load("Embroidery.png");
}

void ofApp::WoodblockPrintsPressed(){
    
    shadowPuppet.load("Woodblock Prints.png");
}











