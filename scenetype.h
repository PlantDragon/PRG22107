#ifndef SCENETYPE_H
#define SCENETYPE_H


class sceneType
{
private:
    int id;
    QPixmap lineBox;
    QPixmap nameBox;
public:
    sceneType();
    sceneType(QPixmap lb, QPixmap nb);
    QPixmap getLineBox();
    QPixmap getNameBox();
};

#endif // SCENETYPE_H
