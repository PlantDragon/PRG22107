#include "scenetype.h"

sceneType::sceneType()
{
}

sceneType::sceneType(QPixmap lb, QPixmap nb)
{
    this->lineBox = lb;
    this->nameBox = nb;
}

QPixmap sceneType::getLineBox()
{
    return this->lineBox;
}

QPixmap sceneType::getNameBox()
{
    return this->nameBox;
}
