/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#ifndef NOC_1_8_MOTION101_MOVER_H
#define NOC_1_8_MOTION101_MOVER_H


#include <ofMain.h>

class Mover {

private:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topspeed;

public:
    Mover();
    void update();
    void checkEdges();
    void display();
};


#endif //NOC_1_8_MOTION101_MOVER_H
