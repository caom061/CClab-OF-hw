/*
 *  testApp.cpp
 *  bouncing demo (simple demo, Newton won't be happy)
 *
 *  by Rick Companje
 *
 */

#include "ofApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    yellowBall.x = ofRandomWidth();
    yellowBall.y = ofRandomHeight();
    yellowBall.vx = ofRandom(-10,10);
    yellowBall.vy = ofRandom(-10,10);
    

}

//--------------------------------------------------------------
void testApp::update() {
    
    yellowBall.x = yellowBall.x + yellowBall.vx;
    yellowBall.y = yellowBall.y + yellowBall.vy;
    
 
    
    if (yellowBall.x<0 || yellowBall.x > ofGetWidth()) {
        yellowBall.vx = -yellowBall.vx;
    }
    
    if (yellowBall.y<0 || yellowBall.y > ofGetHeight()) {
        yellowBall.vy = -yellowBall.vy;
    }
    

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255, 255, 0);
    ofCircle(yellowBall.x, yellowBall.y, 60);
    
  
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
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
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

