#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

void ofApp::setup() {
    ofSetVerticalSync(true);
    ofToggleFullscreen();
    ofSetFrameRate(120);
    finder.setup("haarcascade_frontalface_default.xml");
    finder.setPreset(ObjectFinder::Fast);
    finder.getTracker().setSmoothingRate(.3);
    cam.setup(640*2,480*2);
    //sunglasses.load("sunglasses.png");
    
    ofEnableAlphaBlending();
    
    
   
    
    Korea.addListener(this, &ofApp::KoreaPressed);
    NativeAmerienca.addListener(this, &ofApp::NativeAmeriencaPressed);
    China.addListener(this, &ofApp::ChinaPressed);
    China2.addListener(this, &ofApp::China2Pressed);
    Japan.addListener(this, &ofApp::JapanPressed);
    Amerienca.addListener(this, &ofApp::AmeriencaPressed);
    Mexico.addListener(this, &ofApp::MexicoPressed);
    Italy.addListener(this, &ofApp::ItalyPressed);
    India.addListener(this, &ofApp::IndiaPressed);
    Egypt.addListener(this, &ofApp::EgyptPressed);
    Africa.addListener(this, &ofApp::AfricaPressed);
                     
    gui.setup();
    gui.add(Korea.setup("Korea"));
    gui.add(NativeAmerienca.setup("NativeAmerienca"));
    gui.add(China.setup("China"));
    gui.add(China2.setup("China2"));
    gui.add(Japan.setup("Japan"));
    gui.add(Amerienca.setup("Amerienca"));
    gui.add(Mexico.setup("Mexico"));
    gui.add(Italy.setup("Italy"));
    gui.add(India.setup("India"));
    gui.add(Egypt.setup("Egypt"));
    gui.add(Africa.setup("Africa"));
    
    
    
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
        korea.setAnchorPercent(.51, .3);
        float scaleAmount = 5 * object.width / korea.getWidth();
        ofPushMatrix();
        ofTranslate(object.x + object.width / 2., object.y + object.height * .42);
        ofScale(scaleAmount, scaleAmount);
        korea.draw(0, 0);
        ofPopMatrix();
        ofPushMatrix();
        ofTranslate(object.getPosition());
        ofDrawBitmapStringHighlight(ofToString(finder.getLabel(i)), 0, 0);
        ofDrawLine(ofVec2f(), toOf(finder.getVelocity(i)) * 10);
        ofPopMatrix();
    }
    gui.draw();
    
}

    
void ofApp::KoreaPressed(){
    
    korea.load("korea.png");
   

    
}

void ofApp::NativeAmeriencaPressed(){
    
    korea.load("na.png");
}


void ofApp::ChinaPressed(){
    
    korea.load("china.png");
}

void ofApp::China2Pressed(){
    
    korea.load("china2.png");
}

void ofApp::JapanPressed(){
    
    korea.load("japan.png");
}

void ofApp::AmeriencaPressed(){
    
    korea.load("amerienca.png");
}

void ofApp::MexicoPressed(){
    
    korea.load("mexico.png");
}

void ofApp::ItalyPressed(){
    
    korea.load("italy.png");
}

void ofApp::IndiaPressed(){
    
    korea.load("india.png");
}

void ofApp::EgyptPressed(){
    
    korea.load("egypt.png");
}

void ofApp::AfricaPressed(){
    
    korea.load("africa.png");
}












