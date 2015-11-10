#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    
    // this uses depth information for occlusion
    // rather than always drawing things on top of each other
    ofEnableDepthTest();
    
    // ofBox uses texture coordinates from 0-1, so you can load whatever
    // sized images you want and still use them to texture your box
    // but we have to explicitly normalize our tex coords here
    ofEnableNormalizedTexCoords();
    
    // loads the OF logo from disk
    ofLogo.load("of.png");
    
    // draw the ofBox outlines with some weight
    ofSetLineWidth(1);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    
    float movementSpeed = .1;
    float cloudSize = ofGetWidth() /1.5;
    float maxBoxSize = 150;
    float spacing = 1;
    int boxCount = 100;
    
    cam.begin();
    
    for(int i = 0; i < boxCount; i++) {
        ofPushMatrix();
        
        float t = (ofGetElapsedTimef() + i * spacing) * movementSpeed;
        ofVec3f pos(
                    ofSignedNoise(0, t, 0),
                    ofSignedNoise(t, 0, 0),
                    ofSignedNoise(0, 0, t));
        
        float boxSize = maxBoxSize * ofNoise(pos.x, pos.y, pos.z) * 0.3 ;
        
        pos *= cloudSize;
        ofTranslate(pos);
        ofRotateX(pos.x);
        ofRotateY(pos.y);
        ofRotateZ(pos.z);
        
        ofLogo.bind();
        ofFill();
        ofSetColor(255);
        ofDrawBox(boxSize);
        ofLogo.unbind();
        
        ofNoFill();
        ofSetColor(ofColor::fromHsb(sinf(t) * 128 - 255, 255, 255));
        ofDrawBox(boxSize * 1.8f);
        
        ofPopMatrix();
    }
    
    cam.end();
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    // scrub through aninations manually.
   y = y / (float)ofGetHeight();
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

