#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class character
{
private:
    string name;
    QPixmap images[3];
public:
    character();
    character(string name, QPixmap image[3]);
    character(string name);
    character(string name, QPixmap image);

    QPixmap getPose(int pose);
    string getName();

    void addImage(QPixmap image, int pose);
};

#endif // CHARACTER_H
