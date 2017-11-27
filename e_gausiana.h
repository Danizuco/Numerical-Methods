#ifndef E_GAUSIANA_H
#define E_GAUSIANA_H

#include <QMainWindow>

namespace Ui {
class e_gausiana;
}

class e_gausiana : public QMainWindow
{
    Q_OBJECT

public:
    explicit e_gausiana(QWidget *parent = 0);
    ~e_gausiana();

private:
    Ui::e_gausiana *ui;
public slots:
    void metodo_1(); //Slot that performs the gaussian elimination method
    void borrar_1(); //Slot that erases the contents of the spinbox and text
};

#endif // E_GAUSIANA_H
