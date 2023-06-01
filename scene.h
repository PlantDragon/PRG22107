#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include "line.h"

class scene
{
private:
    int id;
    int posnumber;
    //scenetype
    QtPixmap background;
    //music
    line script[];
    //decision
    boolean end;
public:
    scene();
};

#endif // SCENE_H
