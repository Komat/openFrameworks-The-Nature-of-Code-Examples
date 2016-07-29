#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    ofEnableAlphaBlending();
    ofSetBackgroundAuto(false);
    ofSetWindowShape(200, 200);
    ofBackground(255);
    location.set(100, 100);
    velocity.set(2.5, 5);
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofNoFill();
    ofFill();
    ofSetColor(255, 255, 255, 25);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());

    location += velocity;

    if ((location.x > ofGetWidth()) || (location.x < 0)) {
        velocity.x = velocity.x * -1;
    }
    if ((location.y > ofGetHeight()) || (location.y < 0)) {
        velocity.y = velocity.y * -1;
    }

    ofNoFill();
    ofFill();
    ofSetColor(175, 175, 175);
    ofEllipse(location.x, location.y, 16, 16);
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
