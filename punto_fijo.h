#ifndef PUNTO_FIJO_H
#define PUNTO_FIJO_H

#include <QMainWindow>

namespace Ui {
class punto_fijo;
}

class punto_fijo : public QMainWindow
{
    Q_OBJECT

public:
    explicit punto_fijo(QWidget *parent = 0);
    ~punto_fijo();
 double funcion_2(double c);  //Are you a name to the function that returns the function used in this program
private:
    Ui::punto_fijo *ui;
public slots:
    void metodo_2(); //Slot that carries out the numerical method of fixed point
    void borrar_2(); //Slot that erases the contents of the spinbox and text

};

#endif // PUNTO_FIJO_H
