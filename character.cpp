#include "character.h"

character::character(QString name, QPixmap image)
{
    this->name = name;
    this->image = image;
}
character::character(){
    this->name = "no name";
    //this->QPixmap = NULL;
}

QString character::getName()
{
    return this->name;
}

QPixmap character::getImage()
{
    return this->image;
}

void character::setName(QString name)
{
    this->name = name;
}

void character::setImage(QPixmap image)
{
    this->image = image;
}
