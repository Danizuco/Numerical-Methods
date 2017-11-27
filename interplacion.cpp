#include "interplacion.h"
#include "ui_interplacion.h"
#include <QString> //Bookstore for use of text strings
#include <cmath>    //Library for use of mathematical functions
interplacion::interplacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interplacion)
{                               //Connections of the slots
    ui->setupUi(this);
    connect(ui->inter,SIGNAL(clicked()),this,SLOT(metodo_5()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar_5()));
    connect(ui->cerrar,SIGNAL(clicked()),this,SLOT(close()));
}

interplacion::~interplacion()
{
    delete ui;
}
void interplacion::metodo_5(){

    QString temp,temp1,temp2,temp3;          //Temporary use text strings

    double X1=ui->x1->value();    //Retrieves the X1 value of the spinbox
    double X2=ui->x2->value();    //Retrieves the X2 value of the spinbox
    double X3=ui->x3->value();    //Retrieves the X3 value of the spinbox
    double X4=ui->x4->value();    //Retrieves the X4 value of the spinbox

    double Y1=ui->y1->value();    //Retrieves the Y1 value of the spinbox
    double Y2=ui->y2->value();    //Retrieves the Y2 value of the spinbox
    double Y3=ui->y3->value();    //Retrieves the Y3 value of the spinbox
    double Y4=ui->y4->value();    //Retrieves the Y4 value of the spinbox

    double grad=ui->grado->value(); // Retrieves the value of "EVALUATE"

    double r=0;                   //Star variables at zero
    double F=0;                   //
    int i=0;                      // Variables
    int j=0;                      //
    int n;                        //

    double x[4]={X1,X2,X3,X4};   // Array that retrieves X value
    double y[4]={Y1,Y2,Y3,Y4};   // Array occupying value of Y
    double guarda[4];            // Array that stores values

    for(n=1;n<4;n++){            // Counter number of iterations
        r=0;
    for(i=0;i<=n;i++){           // Counter for sums ranging from zero to "n".
        F=1;
    for(j=0;j<=n;j++){          // Counter for products.

        if(i!=j){                // Condition for assigning values in the formula

        F=F*((grad-x[j])/(x[i]-x[j]));   // Formula where the values are replaced by the position
            }                            // determined by the counters in the arrangements
        }
    F=F*y[i];                   // Multiplying the value of F by the value of y, the arrangement y [i] determines the position
    r=r+F;                      // Sum
            }
    guarda[n]=r;                // save result to array
    }
    temp.append("\tn1=").append(temp1.setNum(guarda[1])).append("\tn2=").append(temp2.setNum(guarda[2])).append("\tn3=").append(temp3.setNum(guarda[3]));
     ui->texto->setText(temp); //Print
       }

void interplacion::borrar_5(){
    ui->x1->setValue(0.0);   //The spinbox is deleted
    ui->x2->setValue(0.0);
    ui->x3->setValue(0.0);
    ui->x4->setValue(0.0);   //The spinbox is deleted
    ui->y1->setValue(0.0);
    ui->y2->setValue(0.0);
    ui->y3->setValue(0.0);   //The spinbox is deleted
    ui->y4->setValue(0.0);
    ui->grado->setValue(0.0);
    ui->texto->clear();      //Clears the text
}


