#ifndef CHARACTERPOSE_H
#define CHARACTERPOSE_H

#include "character.h"

class characterPose
{
private:
    int position;
    QPixmap pose;
    character char;
public:
    characterPose();
};

#endif // CHARACTERPOSE_H
