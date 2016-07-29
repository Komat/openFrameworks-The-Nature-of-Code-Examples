/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#include "Ball.h"


Ball::Ball() {
    location.set(100, 100);
    velocity.set(2.5, 5);
}

void Ball::update() {
    // Add the current speed to the location.
    location += velocity;
    if ((location.x > ofGetWidth()) || (location.x < 0)) {
        velocity.x = velocity.x * -1;
    }
    if ((location.y > ofGetHeight()) || (location.y < 0)) {
        velocity.y = velocity.y * -1;
    }
}

void Ball::display() {
    ofNoFill();
    ofFill();
    ofSetColor(175);
    ofEllipse(location.x, location.y, 16, 16);
}
