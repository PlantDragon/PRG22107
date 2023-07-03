#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include "character.h"
#include "line.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Scene; }
QT_END_NAMESPACE

class Scene : public QWidget
{
    Q_OBJECT

public:
    Scene(QWidget *parent = nullptr);
    ~Scene();

private slots:
    void on_nextButton_clicked();

private:
    Ui::Scene *ui;

    QPixmap background;
    QPixmap lineBox;
    QPixmap char1;
    QPixmap char2;

    QList<line> script;

    int actualLine;
};
#endif // SCENE_H
