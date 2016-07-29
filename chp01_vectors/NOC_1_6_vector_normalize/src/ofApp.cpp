#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetWindowShape(640, 360);
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
    int width = ofGetWidth();
    int height = ofGetHeight();

    ofVec2f mouse(mouseX, mouseY);
    ofVec2f center(width / 2, height / 2);

    mouse -= center;

    mouse.normalize();

    mouse *= 150;


    ofTranslate(width / 2, height / 2);

    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofLine(0, 0, mouse.x, mouse.y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
