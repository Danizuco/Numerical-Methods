#include "rungekutta.h"
#include "ui_rungekutta.h"

rungekutta::rungekutta(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rungekutta)
{
    ui->setupUi(this);
                                  // Connections
connect(ui->metodo,SIGNAL(clicked()),this,SLOT(Metodo()));
connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Borrar()));
connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}
                                 //NOTA: La información fue tomada del libro Métodos Numéricos. Autor: Steven C. Chapra
                                 //Raymond P.Canale. Séptima edición. Pag.569.

rungekutta::~rungekutta()
{
    delete ui;
}double rungekutta::funcion(double v)// defined equation
{
    return
 (-2*pow(v,3)+12*pow(v,2)-20*v+8.5);
}

void rungekutta::Metodo(){

    QString temp,temp1,temp2,temp3,temp4,temp5,temp6;         //Temporary use text strings

    double Xi=ui->xi->value();   //Retrieves tvalue of the spinbox
    double Xf=ui->xf->value();   //
    double H=ui->h->value();   //
    double Y=ui->y->value();   //
    int i=0;
    double k2[100];            //vectors for results
    double k2f[100];           //
    double y[100];             //
    double t;
    int n=0;
    double a=1;
    n=(Xf-Xi)/H;               //calculation of the number of iterations for the for cycle.

     for(i=0;i<n;i++){
                             //
      k2[i]=Xi+0.5*H;        //K2 is calculated and saved in the vector
      Xi+=0.5;
      k2f[i]=funcion(k2[i]); //K2 is evaluated in the defined function.

      y[i]=a+k2f[i]*H;       // The values for x are obtained according to the formula
      a=y[i];                // yi+1=yi+K2*h;
      t+=0.5;
 temp.append("\t \n x").append(temp2.setNum(t)).append("  =  ").append(temp3.setNum(y[i]));//.append("\nx3=").append(temp4.setNum(x3)).append("\nx4=").append(temp5.setNum(x4));  //Se prepara el texto para ser presentado
ui->texto->setText(temp);  //The text is presented
}

}

void rungekutta::Borrar(){
    ui->xi->setValue(0.0);  //The spinbox is deleted
    ui->xf->setValue(0.0);
    ui->h->setValue(0.0);
    ui->y->setValue(0.0);
    ui->texto->clear();
}
