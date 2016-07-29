/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#ifndef NOC_2_2_FORCES_MANY_MOVER_H
#define NOC_2_2_FORCES_MANY_MOVER_H


#include <ofMain.h>

class Mover {

private:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float mass;

public:
    Mover();
    void update();
    void display();
    void applyForce(ofVec2f force);
    void checkEdges();
};


#endif //NOC_2_2_FORCES_MANY_MOVER_H
