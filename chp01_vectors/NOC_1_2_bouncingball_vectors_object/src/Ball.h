/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#ifndef NOC_1_2_BOUNCINGBALL_VECTORS_OBJECT_BALL_H
#define NOC_1_2_BOUNCINGBALL_VECTORS_OBJECT_BALL_H

#include "ofMain.h"

class Ball {

private:
    ofVec2f location;
    ofVec2f velocity;

public:
    Ball();
    void update();
    void display();

};


#endif //NOC_1_2_BOUNCINGBALL_VECTORS_OBJECT_BALL_H
