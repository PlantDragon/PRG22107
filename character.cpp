#include "character.h"

character::character()
{
    this->name = NoName;
    this->images = NULL;
}

character::character(string name)
{
    this->name = name;
    this->images = NULL;
}

character::character(string name, QPixmap images[3])
{
    this->name = name;
    this->images = images;
}

character::character(string name, QPixmap image)
{
    this->name;
    for (int i = 0; i <= 3; i++)
    {
        this->images[i] = image;
    }
}

QPixmap character::getPose(int pose)
{
    return images[pose];
}

string character::getName()
{
    return name;
}

void character::addImage(QPixmap image, int pose)
{
    this->images[pose] = image;
}
