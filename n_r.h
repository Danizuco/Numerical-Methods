#ifndef N_R_H
#define N_R_H

#include <QMainWindow>

namespace Ui {
class n_r;
}

class n_r : public QMainWindow
{
    Q_OBJECT

public:
    explicit n_r(QWidget *parent = 0);
    ~n_r();
    double funcion_7(double c);  //Are you a name to the function that returns the function used in this program
    double dfuncion(double c);// first derivade
private:
    Ui::n_r *ui;
public slots:
    void metodo_7(); //Slot that carries out the numerical method of fixed point
     void borrar_7(); //Slot that erases the contents of the spinbox and text
};

#endif // N_R_H
