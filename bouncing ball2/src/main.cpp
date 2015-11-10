#include "ofApp.h"

int main() {
    ofAppGlutWindow window;
    ofSetupOpenGL(&window, 800, 500, OF_WINDOW);
    ofRunApp( new testApp());
}
