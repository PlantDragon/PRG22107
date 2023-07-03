#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>
#include <QPixmap>

class character
{
public:
    character();
    character(QString name, QPixmap image);

    QString getName();
    QPixmap getImage();

    void setName(QString name);
    void setImage(QPixmap image);

private:
    QString name;
    QPixmap image;
};

#endif // CHARACTER_H
