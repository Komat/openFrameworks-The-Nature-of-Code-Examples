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

void Mover::update(int mouseX, int mouseY) {

    ofVec2f mouse(mouseX, mouseY);
    ofVec2f acceleration(mouse - location);

    acceleration.limit(0.2);

    velocity += acceleration;
    velocity.limit(topspeed);
    location += velocity;
}


void Mover::display() {
    ofFill();
    ofSetLineWidth(2);
    ofSetColor(127);
    ofEllipse(location.x, location.y, 48, 48);
}
