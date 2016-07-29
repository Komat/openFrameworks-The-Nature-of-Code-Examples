/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#include "Mover.h"

Mover::Mover() {

    int width = ofGetWidth();
    int height = ofGetHeight();

    location.set(ofRandom(width), ofRandom(height));
    velocity.set(ofRandom(-2, 2), ofRandom(-2, 2));
    topspeed = 10;

}

void Mover::update() {
    acceleration.x = ofRandom((float) 3.141592653589793);
    acceleration.y = ofRandom((float) 3.141592653589793);
    acceleration *= ofRandom(2);

    velocity += acceleration;
    velocity.limit(topspeed);
    location += velocity;
}

void Mover::checkEdges() {

    int width = ofGetWidth();
    int height = ofGetHeight();

    if (location.x > width) {
        location.x = 0;
    }
    else if (location.x < 0) {
        location.x = width;
    }

    if (location.y > height) {
        location.y = 0;
    }
    else if (location.y < 0) {
        location.y = height;
    }
}

void Mover::display() {
    ofFill();
    ofSetLineWidth(2);
    ofSetColor(127);
    ofEllipse(location.x, location.y, 48, 48);
}
