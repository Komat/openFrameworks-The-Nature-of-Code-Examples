/**
 * @description
 * @author komatsu
 * @date 7/26/16
 * @version 0.0.0
 */

#ifndef NOC_1_7_MOTION101_MOVER_H
#define NOC_1_7_MOTION101_MOVER_H


#include <ofMain.h>

class Mover {

private:
    ofVec2f location;
    ofVec2f velocity;

public:
    Mover();
    void update();
    void checkEdges();
    void display();
};


#endif //NOC_1_7_MOTION101_MOVER_H
