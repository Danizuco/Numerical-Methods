#ifndef INTERPLACION_H
#define INTERPLACION_H

#include <QMainWindow>

namespace Ui {
class interplacion;
}

class interplacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit interplacion(QWidget *parent = 0);
    ~interplacion();

private:
    Ui::interplacion *ui;
public slots:
void metodo_5();     //Slot that performs the bisection method
void borrar_5();     //Slot that erases the contents of the spinbox and text
};

#endif // INTERPLACION_H
