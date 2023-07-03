#include "scene.h"
#include "ui_scene.h"

#include "scene.h"
#include <QDebug>

Scene::Scene(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Scene)
{
    ui->setupUi(this);

    background = QPixmap(":/images/background1.jpg");
    lineBox = QPixmap(":/images/dbox.png");
    char1 = QPixmap(":/characters/images/haruko.png");
    char2 = QPixmap(":/characters/images/terebi.png");

    character c1("Haruno", char1);
    character c2("Terebi", char2);

    actualLine = 0;

    //---- lines ----
    script.append(line("Yoooo.", c1));
    script.append(line(".....", c2));
    script.append(line("Presta atenção aqui, não finge que não me escuta", c1));
    script.append(line("*encarra*", c1));
    script.append(line("Oi?? falou comigo", c2));
    //---------------


    ui->backgroundLabel->setPixmap(background);
    ui->lineBoxLabel->setPixmap(lineBox.scaled(780,200));
    ui->charLabel->setPixmap(c1.getImage().scaledToWidth(250));
    ui->charLabel_2->setPixmap(c2.getImage().scaledToWidth(250));

    ui->nameLabel->setText(script[0].getCharacter().getName());
    ui->lineLabel->setText(script[0].getlineText());
    if (script[actualLine].getCharacter().getName() == "Haruno"){
        ui->charLabel_2->setDisabled(true);
        ui->charLabel->setDisabled(false);
    }else{
        ui->charLabel_2->setDisabled(false);
        ui->charLabel->setDisabled(true);
    }

}

Scene::~Scene()
{
    delete ui;
}


void Scene::on_nextButton_clicked()
{
    actualLine++;
    ui->nameLabel->setText(script[actualLine].getCharacter().getName());
    ui->lineLabel->setText(script[actualLine].getlineText());
    if (script[actualLine].getCharacter().getName() == "Haruno"){
        ui->charLabel_2->setDisabled(true);
        ui->charLabel->setDisabled(false);
    }else{
        ui->charLabel_2->setDisabled(false);
        ui->charLabel->setDisabled(true);
    }

    if((actualLine+1) == script.count()){
        ui->nextButton->setDisabled(true);
    }
}

