#ifndef INTEG_H
#define INTEG_H

#include <QMainWindow>

namespace Ui {
class integ;
}

class integ : public QMainWindow
{
    Q_OBJECT

public:
    explicit integ(QWidget *parent = 0);
    ~integ();

private:
    Ui::integ *ui;
public slots:
    void metodo_4();  //Declaración de las funciones
    void borrar_4();
};

#endif // INTEG_H
