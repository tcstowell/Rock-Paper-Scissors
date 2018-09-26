#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rps(int o)
{
    qsrand(QTime::currentTime().msec());
    int r = qrand()%3;
    rps2 *tab = new rps2(this);
    tab->pass(o, r);
    tab->exec();
}

void MainWindow::on_rock_clicked()
{
    rps(0);
}

void MainWindow::on_paper_clicked()
{
    rps(1);
}

void MainWindow::on_scissor_clicked()
{
    rps(2);
}
