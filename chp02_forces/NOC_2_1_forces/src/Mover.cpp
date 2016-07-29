/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#include "Mover.h"

Mover::Mover() {

    location.set(30, 30);
    velocity.set(0, 0);
    acceleration.set(0, 0);
    mass = 1;

}

void Mover::update() {
    velocity += acceleration;
    location += velocity;
    acceleration.x *= 0;
    acceleration.y *= 0;
}


void Mover::display() {
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor(127);
    ofEllipse(location.x, location.y, 48, 48);
}

void Mover::applyForce(ofVec2f force) {
    acceleration.x = force.x / mass;
    acceleration.y = force.y / mass;
}

void Mover::checkEdges() {

    int width = ofGetWidth();
    int height = ofGetHeight();

    if (location.x > width) {
        location.x = width;
        velocity.x *= -1;
    } else if (location.x < 0) {
        velocity.x *= -1;
        location.x = 0;
    }

    if (location.y > height) {
        velocity.y *= -1;
        location.y = height;
    }

}
