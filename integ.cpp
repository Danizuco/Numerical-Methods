#include "integ.h"
#include "ui_integ.h"

integ::integ(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::integ)
{
    ui->setupUi(this);
    connect(ui->Calcular,SIGNAL(clicked()),this,SLOT(metodo_4()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar_4()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

integ::~integ()
{
    delete ui;
}
void integ::metodo_4(){
    QString temp, temp1;
    //Variables in program
    double Q[11];
    double h=ui->h->value();
    double integr=0;
    double integ1=0;
    double integ2=0;
    int r;
    Q[0]=ui->FX5->value(); //The data of the spingboxes are saved in a vector
    Q[1]=ui->FX1->value();
    Q[2]=ui->FX2->value();
    Q[3]=ui->FX3->value();
    Q[4]=ui->FX4->value();
    Q[5]=ui->FX->value();
    Q[6]=ui->FX_1->value();
    Q[7]=ui->FX_2->value();
    Q[8]=ui->FX_3->value();
    Q[9]=ui->FX_4->value();
    Q[10]=ui->FX_5->value();

    integ1=(h/2)*Q[0];   //evaluated in the initial part and in the final part
    integ2=(h/2)*Q[10];


    for(r=1;r<10;r++){    //The function is evaluated at its intermediate points
        integr=integr+((h)*Q[r]);
    }
                                     //The result of point is added
    integr=integr+integ1+integ2;

    temp.append("Res=").append(temp1.setNum(integr));   //The result is presented
    ui->texto->setText(temp);
}
void integ::borrar_4(){
    ui->X->setValue(0.0);
    ui->X_1->setValue(0.0);
    ui->X_2->setValue(0.0);
    ui->X_3->setValue(0.0);
    ui->X_4->setValue(0.0);
    ui->X_5->setValue(0.0);
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->X3->setValue(0.0);
    ui->X4->setValue(0.0);
    ui->X5->setValue(0.0);
    ui->FX_1->setValue(0.0);
    ui->FX_2->setValue(0.0);
    ui->FX_3->setValue(0.0);
    ui->FX_4->setValue(0.0);
    ui->FX_5->setValue(0.0);
    ui->FX1->setValue(0.0);
    ui->FX2->setValue(0.0);
    ui->FX3->setValue(0.0);
    ui->FX4->setValue(0.0);
    ui->FX5->setValue(0.0);
    ui->FX->setValue(0.0);
    ui->h->setValue(0.0);
     ui->texto->clear();
}

