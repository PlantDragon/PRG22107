#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include <QObject>
#include "line.h"

class scene : public QWidget
{
    Q_OBJECT
private:
    int _id;
    int _posnumber;
    sceneType _type;
    QtPixmap _background;
    //music
    line _script[];
    //decision
    boolean _end;

public:
    scene();
    scene(int p, sceneType t, QtPixmap b, line s[], boolean end);

    void setPosNumber(int n);
    void addLine(line l);
    void setSceneType (sceneType t);
    void setEnd (boolean end);
    void setBackgorund(QtPixmap b);

    line getLine(int n);
    boolean getEnd();
    sceneType getSceneType();

    void showScene(QtWidget *parent);
};

#endif // SCENE_H
