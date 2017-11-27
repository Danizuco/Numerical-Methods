#ifndef NUMERICAL_METHODS_4_H
#define NUMERICAL_METHODS_4_H
                            //Bookstores are added. h
#include <QMainWindow>
#include "derivacion.h"
#include "e_gausiana.h"
#include "euler.h"
#include "g_seidel.h"
#include "integ.h"
#include "interplacion.h"
#include "n_r.h"
#include "punto_fijo.h"
#include "r_l_m.h"
#include "r_lineal.h"
#include "rungekutta.h"

namespace Ui {
class numerical_methods_4;
}

class numerical_methods_4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit numerical_methods_4(QWidget *parent = 0);
    ~numerical_methods_4();
    derivacion *derivacion_2;
    e_gausiana *e_gausiana_2;
    euler *euler_2;
    g_seidel *g_seidel_2;
    integ *integ_2;
    interplacion *interplacion_2;
    n_r *n_r_2;
    punto_fijo *punto_fijo_2;
    r_l_m *r_l_m_2;
    r_lineal *r_lineal_2;
    rungekutta *runge_2;
private:
    Ui::numerical_methods_4 *ui;
public slots:                    //slots for each program
    void inicioderivacion();
    void inicioe_gausiana();
    void inicioeuler();
    void iniciog_seidel();
    void iniciointeg();
    void iniciointerplacion();
    void inicion_r();
    void iniciopunto_fijo();
    void inicior_l_m();
    void inicior_lineal();
    void inicio_runge();
    void sal();
};

#endif // NUMERICAL_METHODS_4_H
