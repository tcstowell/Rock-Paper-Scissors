#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "rps2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void rps(int o);

    void on_rock_clicked();

    void on_paper_clicked();

    void on_scissor_clicked();

private:
    Ui::MainWindow *ui;
    int obj;
};

#endif // MAINWINDOW_H
