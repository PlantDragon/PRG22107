#ifndef CHARACTERPOSE_H
#define CHARACTERPOSE_H

#include "character.h"

class characterPose
{
private:
    int position;
    int pose;
    character c;
public:
    characterPose(int pos, int pose, character c);
};

#endif // CHARACTERPOSE_H
