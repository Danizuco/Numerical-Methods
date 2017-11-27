#include "numerical_methods_4.h"
#include "ui_numerical_methods_4.h"

numerical_methods_4::numerical_methods_4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::numerical_methods_4)
{
    ui->setupUi(this);
    derivacion_2 = new derivacion;
    e_gausiana_2 = new e_gausiana;
    euler_2 = new euler;
    g_seidel_2 = new g_seidel;
    integ_2 = new integ;
    interplacion_2 = new interplacion;
    n_r_2 = new n_r;
    punto_fijo_2 = new punto_fijo;
    r_l_m_2 = new r_l_m;
    r_lineal_2 = new r_lineal;
    runge_2 = new rungekutta;
                                                 // Connections
    connect(ui->derivacion,SIGNAL(clicked()),this,SLOT(inicioderivacion()));
    connect(ui->e_gausiana,SIGNAL(clicked()),this,SLOT(inicioe_gausiana()));
    connect(ui->euler,SIGNAL(clicked()),this,SLOT(inicioeuler()));
    connect(ui->g_seidel,SIGNAL(clicked()),this,SLOT(iniciog_seidel()));
    connect(ui->integ,SIGNAL(clicked()),this,SLOT(iniciointeg()));
    connect(ui->interplacion,SIGNAL(clicked()),this,SLOT(iniciointerplacion()));
    connect(ui->n_r,SIGNAL(clicked()),this,SLOT(inicion_r()));
    connect(ui->punt_fijo,SIGNAL(clicked()),this,SLOT(iniciopunto_fijo()));
    connect(ui->r_l_m,SIGNAL(clicked()),this,SLOT(inicior_l_m()));
    connect(ui->r_lineal,SIGNAL(clicked()),this,SLOT(inicior_lineal()));
    connect(ui->runge,SIGNAL(clicked()),this,SLOT(inicio_runge()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(sal()));
}

numerical_methods_4::~numerical_methods_4()
{
    delete ui;
}
void numerical_methods_4::inicioderivacion(){
    derivacion_2->show();
}
void numerical_methods_4::inicioe_gausiana(){
    e_gausiana_2->show();
}
void numerical_methods_4::inicioeuler(){
    euler_2->show();
}
void numerical_methods_4::iniciog_seidel(){
    g_seidel_2->show();
}
void numerical_methods_4::iniciointeg(){
    integ_2->show();
}
void numerical_methods_4::iniciointerplacion(){
    interplacion_2->show();
}
void numerical_methods_4::inicion_r(){
    n_r_2->show();
}
void numerical_methods_4::iniciopunto_fijo(){
    punto_fijo_2->show();
}
void numerical_methods_4::inicior_l_m(){
    r_l_m_2->show();
}
void numerical_methods_4::inicior_lineal(){
    r_lineal_2->show();
}
void numerical_methods_4::inicio_runge(){
    runge_2->show();
}
void numerical_methods_4::sal(){         //the screens of each program are erased
    delete derivacion_2;
    delete e_gausiana_2;
    delete euler_2;
    delete g_seidel_2;
    delete integ_2;
    delete interplacion_2;
    delete n_r_2;
    delete punto_fijo_2;
    delete r_l_m_2;
    delete r_lineal_2;
    delete runge_2;
    close();                            //the program closes
}
