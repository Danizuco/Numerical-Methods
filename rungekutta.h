#ifndef RUNGEKUTTA_H
#define RUNGEKUTTA_H

#include <QMainWindow>

namespace Ui {
class rungekutta;
}

class rungekutta : public QMainWindow
{
    Q_OBJECT

public:
    explicit rungekutta(QWidget *parent = 0);
    ~rungekutta();
    double funcion(double v);//funtion that we use

private:
    Ui::rungekutta *ui;
private slots:
    void Metodo(); //Slot that carries out the numerical method of fixed point
    void Borrar(); //Slot that erases the contents of the spinbox and textp
};

#endif // RUNGEKUTTA_H
