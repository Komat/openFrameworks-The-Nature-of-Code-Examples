/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#ifndef NOC_1_11_MOTION101_ACCELERATION_ARRAY_MOVER_H
#define NOC_1_11_MOTION101_ACCELERATION_ARRAY_MOVER_H


#include <ofMain.h>

class Mover {

private:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topspeed;

public:
    Mover();
    void update(int mouseX, int mouseY);
    void display();
};


#endif //NOC_1_11_MOTION101_ACCELERATION_ARRAY_MOVER_H
