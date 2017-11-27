#include "g_seidel.h"
#include "ui_g_seidel.h"
#include <QString>  //Bookstore for use of text strings
#include <cmath>    //Library for use of mathematical functions

g_seidel::g_seidel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::g_seidel)
{
    ui->setupUi(this);
                                     //Connections of the slots
    connect(ui->procesar,SIGNAL(clicked()),this,SLOT(metodo_3()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar_3()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
   }
g_seidel::~g_seidel()
{
    delete ui;
}
void g_seidel::metodo_3(){

    QString temp,temp2,temp3,temp4,temp5,temp6,temp7,temp8;          //Temporary use text strings
    double ecc=ui->E00->value();      //Retrieves the X1 value of the spinbox
    double e01=ui->E01->value();      //Retrieves the X2 value of the spinbox
    double e02=ui->E02->value();      //Retrieves the X3 value of the spinboxv
    double e03=ui->E03->value();      //Retrieves the X4 value of the spinbox

    double e10=ui->E10->value();      //Retrieves the X1 value of the spinbox
    double e11=ui->E11->value();      //Retrieves the X2 value of the spinbox
    double e12=ui->E12->value();      //Retrieves the X3 value of the spinboxv
    double e13=ui->E13->value();      //Retrieves the X4 value of the spinbox

    double e20=ui->E20->value();      //Retrieves the X1 value of the spinbox
    double e21=ui->E21->value();      //Retrieves the X2 value of the spinbox
    double e22=ui->E22->value();      //Retrieves the X3 value of the spinboxv
    double e23=ui->E23->value();      //Retrieves the X4 value of the spinbox

    double e30=ui->E30->value();      //Retrieves the X1 value of the spinbox
    double e31=ui->E31->value();      //Retrieves the X2 value of the spinbox
    double e32=ui->E32->value();      //Retrieves the X3 value of the spinboxv
    double e33=ui->E33->value();      //Retrieves the X4 value of the spinbox

    double r0=ui->R1->value();        //Retrieves the A value of the spinbox
    double r1=ui->R2->value();        //Retrieves the B value of the spinbox
    double r2=ui->R3->value();        //Retrieves the C value of the spinbox
    double r3=ui->R4->value();        //Retrieves the D value of the spinbox
    double itt=ui->iter->value();     //Retrieves the value of the iteractions of the spinbox
    double err=ui->error->value();    //Retrieves the value of the error of the spinbox
    double a=0;                       // Start the number of interactions at zero
    double x1=0;
    double X1=0;                      //Star variables at zero
    double x2=0;
    double x3=0;
    double xe=0;
    double x4=0;
    double xi=0;
    double xo=0;
    double xu=0;
    double erc=100;                  //set the maximum error value that can be entered
    double erc2=100;
    double erc3=100;
    double erc4=100;
    while((a<itt)&&(erc>err)){
        //if(ecc>=e10){
         //if(ecc>=e20){
         //if(ecc>=e30){
       x1=(r0-e01*x2-e02*x3-e03*x4)/(ecc);
       erc=100*std::abs(x1-xe)/(x1);
       xe=x1;//}}}

        //if(e11>=e01){
        //if(e11>=e21){
        //if(e11>=e31){
       x2=(r1-e10*x1-e12*x3-e13*x4)/(e11);
       erc=100*std::abs(x2-xi)/(x2);
       xi=x2;//}}}

        //if(e22>=e02){
        //if(e22>=e12){
        //if(e22>=e32){
       x3=(r2-e20*x1-e21*x2-e23*x4)/(e22);
       erc=100*std::abs(x3-xo)/(x3);
       xo=x3;//}}}

        //if(e33>=e03){
        //if(e33>=e13){
        //if(e33>=e23){
       x4=(r3-e30*x1-e31*x2-e32*x3)/(e33);
       erc=100*std::abs(x4-xu)/(x4);
       xu=x4;//}}}
   a++;                               //Increases the counter depending on the number of necessary interactions
    }
    temp.append("x1=").append(temp2.setNum(x1)).append("\nx2=").append(temp3.setNum(x2)).append("\nx3=").append(temp4.setNum(x3)).append("\nx3=").append(temp5.setNum(x4)).append("\nerror=").append(temp6.setNum(erc)).append("\niter=").append(temp7.setNum(a));
ui->Texto->setText(temp);
}

void g_seidel::borrar_3(){
    ui->E00->setValue(0.0);           //The spinbox is deleted
    ui->E01->setValue(0.0);
    ui->E02->setValue(0.0);
    ui->E03->setValue(0.0);
    ui->E10->setValue(0.0);
    ui->E11->setValue(0.0);
    ui->E12->setValue(0.0);
    ui->E13->setValue(0.0);
    ui->E20->setValue(0.0);
    ui->E21->setValue(0.0);
    ui->E22->setValue(0.0);
    ui->E23->setValue(0.0);
    ui->E30->setValue(0.0);
    ui->E31->setValue(0.0);
    ui->E32->setValue(0.0);
    ui->E33->setValue(0.0);
    ui->R1->setValue(0.00);
    ui->R2->setValue(0.00);
    ui->R3->setValue(0.00);
    ui->R4->setValue(0.00);
    ui->error->clear();
     ui->iter->clear();
    ui->Texto->clear();               //Clears the text

}


