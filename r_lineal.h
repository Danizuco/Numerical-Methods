#ifndef R_LINEAL_H
#define R_LINEAL_H

#include <QMainWindow>

namespace Ui {
class r_lineal;
}

class r_lineal : public QMainWindow
{
    Q_OBJECT

public:
    explicit r_lineal(QWidget *parent = 0);
    ~r_lineal();

private:
    Ui::r_lineal *ui;
public slots:
void metodos_8();
void borrar_8();
};

#endif // R_LINEAL_H
