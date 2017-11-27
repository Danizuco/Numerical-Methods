#include "euler.h"
#include "ui_euler.h"
#include "cmath"                //Math libraries are added
#include "math.h"

euler::euler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::euler)
{                                // Connections
    ui->setupUi(this);
    connect(ui->metodo,SIGNAL(clicked()),this,SLOT(Metodo_6()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Borrar_6()));
   connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}

euler::~euler()
{
    delete ui;
}
double euler::funcion_6(double x){  //ecuation
    return ((-0.5*(pow(x,4)))+(4*(pow(x,3)))-(10*(pow(x,2)))+(8.5*x)+1);
}
double euler::derivada(double x){ //first derivate
    return ((-2*(pow(x,3)))+(12*(pow(x,2)))-(20*x)+8.5);
}


void euler::Metodo_6(){

    QString temp,temp1;           // string type variables are defined for visualization

        double H;                 //variables of type double are declared
        double XMIN;
        double XMAX;
        double d,y;
        double p=0;

        H=ui->h->value();         //returns the value of spinbox
        XMIN=ui->xmin->value();
        XMAX=ui->xmax->value();

        int inter=(XMAX-XMIN)/H;    //interactions are calculated
        double val[inter+1][3];    //a matrix is ​​declared where the obtained results will be stored


        for(int i=0;i<=inter;i++){ //points are calculated for an evaluation
            val[i][0]=p;
            p=p+H;
        }
        for(int j=0;j<=inter;j++){  //the points are evaluated
            val[j][1]=funcion_6(val[j][0]);
        }
        double e=val[0][1];        //a value of the matrix is ​​saved in the euler variable
        double x=val[0][0];        // variable x is defined
        val[0][2]=val[0][1];

        for(int k=1;k<=inter;k++){     //the euler method is calculated and stored in the matrix
           d=derivada(x);
            y=e+(d*H);
            e=y;
            x=x+H;
            val[k][2]=y;
        }
        double error[inter+1];         //a vector called error is created
        error[0]=0;
        for(int i=1;i<=inter;i++){    //the errors are calculated and saved in the error vector
        error[i]=100*std::abs((val[i][1]-val[i][2]))/val[i][1];
    }
        ui->tabla->setRowCount(inter+1); //number of rows and columns is defined
        ui->tabla->setColumnCount(4);

        for(int i=0;i<4;i++){
            for(int j=0;j<=inter;j++){ //the dimensions of the table are created
                 ui->tabla->setItem(j,i,new QTableWidgetItem);
            }
        }
       for(int i=0;i<3;i++){           // the table is filled with the results
           for(int j=0;j<=inter;j++){
               ui->tabla->item(j,i)->setText(temp.setNum(val[j][i]));
           }
       }
       for(int i=0;i<=inter;i++){     //the values ​​of the errors are added to the table
           ui->tabla->item(i,3)->setText(temp1.setNum(error[i]));
       }
    }


void euler::Borrar_6(){                 //method borrar
    ui->h->setValue(0.0);             //The spinbox is deleted
    ui->xmin->setValue(0.0);
    ui->xmax->setValue(0.0);
    ui->tabla->clear();               //the values ​​of the QTableWidget are cleaned
}
