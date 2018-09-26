#include "rps2.h"
#include "ui_rps2.h"

rps2::rps2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rps2)
{
    ui->setupUi(this);
}

rps2::~rps2()
{
    delete ui;
}
void rps2::pass(int &u, int &c)
{
    you=u;
    comp=c;
    imgU(you);
    imgC(comp);
    if(you==comp){
        win = loss = "tie";
    }
    if(you==((comp+1)%3)){
        win = "won";
        loss = "loss";
    }
    if(you==((comp-1)%3)){
        win = "loss";
        loss = "won";
    }
    if(you==2 && comp == 0){
        win = "loss";
        loss = "won";
    }
    ui->winner->setText(win);
    ui->loser->setText(loss);
}

void rps2::imgU(int i)
{
    switch (i) {
    case 0:
        ui->you->setPixmap(QPixmap(":/new/prefix1/rps.001.png"));
        break;
    case 1:
        ui->you->setPixmap(QPixmap(":/new/prefix1/rps.002.png"));
        break;
    case 2:
        ui->you->setPixmap(QPixmap(":/new/prefix1/rps.003.png"));
        break;
    }
}

void rps2::imgC(int i)
{
    switch (i) {
    case 0:
        ui->computer->setPixmap(QPixmap(":/new/prefix1/rps.001.png"));
        break;
    case 1:
        ui->computer->setPixmap(QPixmap(":/new/prefix1/rps.002.png"));
        break;
    case 2:
        ui->computer->setPixmap(QPixmap(":/new/prefix1/rps.003.png"));
        break;
    }
}
