#include "ofApp.h"

float x = 100;
float y = 100;
float xspeed = 2.5;
float yspeed = 2;


//--------------------------------------------------------------
void ofApp::setup(){
  ofSetWindowShape(800, 200);
  ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(255);

  x = x + xspeed;
  y = y + yspeed;

  if ((x > ofGetWidth()) || (x < 0)) {
    xspeed = xspeed * -1;
  }
  if ((y > ofGetHeight()) || (y < 0)) {
    yspeed = yspeed * -1;
  }

  ofNoFill();
  ofSetLineWidth(2);
  ofFill();
  ofEllipse(x, y, 48, 48);
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
