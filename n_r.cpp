#include "n_r.h"
#include "ui_n_r.h"
#include <QString>  //Library for the use of text strings
#include <cmath>    //Library for the use of mathematical functions

n_r::n_r(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::n_r)
{                           //Connections of the slots
    ui->setupUi(this);
    connect(ui->Process,SIGNAL(clicked()),this,SLOT(metodo_7()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar_7()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

n_r::~n_r()
{
    delete ui;
}
double n_r::funcion_7(double c){           //The function is called
    return(exp(-c)-c);   //You write the function to use and returns the function
}
double n_r::dfuncion(double c)         //use of the first derivative
{
    return(-exp(-c)-1);
}

void n_r::metodo_7(){
    QString temp,temp2,temp3,temp4,temp5;  //Temporary use text strings
    double x1=ui->X1->value();        //Retrieves the value of X 1 of the spinbox
    double err=ui->Err->value();      //Retrieves the value of the error of the spinbox
    double nit=ui->NI->value();     //Retrieves the value of the iteractions of the spinbox
    double xi=00;                 //start the number of xi at zero
    double ea=100.0;             //set the maximum error value that can be entered
    double ni=0;                   // Start the number of interactions at zero

        while((ea>err)&&(ni<nit))
       {
       xi=(x1-(funcion_7(x1))/(dfuncion(x1))); //Evaluación de las funciones en busca de la raíz.
       ea=100*std::abs((xi-x1)/xi);          //The error is calculated
       x1=xi;                                 //Equal variables
       ni++;                             //Increases the counter depending on the number of necessary interactions
       }

        temp.append("Raiz=").append(temp2.setNum(xi)).append("\nError=").append(temp3.setNum(ea)).append("\nIteraciones=").append(temp4.setNum(ni));
        ui->Texto->setText(temp); //The text is presented
}

void n_r::borrar_7(){
    ui->X1->setValue(0.0);    //The spinbox is deleted
    ui->Err->setValue(0.0);
    ui->Texto->clear();       //Clears the text

}

