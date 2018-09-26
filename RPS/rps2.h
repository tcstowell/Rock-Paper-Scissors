#ifndef RPS2_H
#define RPS2_H

#include <QDialog>
#include <QString>

namespace Ui {
class rps2;
}

class rps2 : public QDialog
{
    Q_OBJECT

public:
    explicit rps2(QWidget *parent = 0);
    ~rps2();

    void pass(int &u, int &c);

private slots:

    void imgU(int i);

    void imgC(int i);

private:
    Ui::rps2 *ui;
    QString win, loss;
    int you;
    int comp;
};

#endif // RPS2_H
