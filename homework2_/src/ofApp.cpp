#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    animation.setup();
    
    wukong.load("of.png");
    bajie.load("of1.png");
    shaseng.load("of2.png");
    shifu.load("of3.png");
    
    wy.load("1.2.png");
    sy.load("2.2.png");
    shay.load("3.2.png");
    by.load("4.2.png");
    
    gui.setup();
    gui.add(sinParam.set("SINE",0.0, 0.0, 300.0));
    gui.add(cosParam.set("COSINE", 0.0, 0.0, 300.0));
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    sine = sin(ofGetElapsedTimef() * 2.0) * sinParam;
    cose = cos(ofGetElapsedTimef() * 2.0) * cosParam;
            

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    gui.draw();
    
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
   // ofCircle(sine, cose, 30);
    
    animation.draw();
    wy.draw(sine+20, cose-50, 150, 200, 70);
    wukong.draw(sine+50, cose*1.8-50, 150, 200);
    
    sy.draw(sine-150, cose*0.6-15, 120, 100, 80);
    shifu.draw(sine-100, cose*0.6-20, 100, 150);
    
    shay.draw(sine-300, cose-50, 100,140, 130);
    shaseng.draw(sine-250, cose-50, 100,150);
    
    by.draw(sine*0.5-380, cose+50, 150,100, 120);
    bajie.draw(sine*0.5-450, cose+50, 200,170);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

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
