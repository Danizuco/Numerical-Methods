#ifndef EULER_H
#define EULER_H

#include <QMainWindow>

namespace Ui {
class euler;
}

class euler : public QMainWindow
{
    Q_OBJECT

public:
    explicit euler(QWidget *parent = 0);
    ~euler();
    double funcion_6(double v);//funtion that we use for derivation
    double derivada(double v);//first derivate

private:
    Ui::euler *ui;
private slots:
    void Metodo_6(); //Slot that carries out the numerical method of fixed point
    void Borrar_6(); //Slot that erases the contents of the spinbox and textp

};

#endif // EULER_H
