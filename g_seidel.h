#ifndef G_SEIDEL_H
#define G_SEIDEL_H

#include <QMainWindow>

namespace Ui {
class g_seidel;
}

class g_seidel : public QMainWindow
{
    Q_OBJECT

public:
    explicit g_seidel(QWidget *parent = 0);
    ~g_seidel();

private:
    Ui::g_seidel *ui;
public slots:
    void metodo_3(); //Slot that performs the bisection method
    void borrar_3(); //Slot that erases the contents of the spinbox and text
};

#endif // G_SEIDEL_H
