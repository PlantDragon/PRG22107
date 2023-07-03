#include "line.h"

line::line(QString l, character _ch)
{
    text = l;
    ch = _ch;
}

QString line::getlineText()
{
    return text;
}

character line::getCharacter()
{
    return ch;
}

//QPixmap line::getCharacterImage()
//{
//    return this->image;
//}
