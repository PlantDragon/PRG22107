#ifndef LINE_H
#define LINE_H

#include <QString>
#include <QPixmap>

#include "character.h"

class line
{
public:
    line(QString l, character ch);

    QString getlineText();
    character getCharacter();
    //QPixmap getCharacterImage();

private:
    QString text;
    character ch;
    //QString name;
    //QPixmap image;
};

#endif // LINE_H
