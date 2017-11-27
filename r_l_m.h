#ifndef R_L_M_H
#define R_L_M_H

#include <QMainWindow>

namespace Ui {
class r_l_m;
}

class r_l_m : public QMainWindow
{
    Q_OBJECT

public:
    explicit r_l_m(QWidget *parent = 0);
    ~r_l_m();

private:
    Ui::r_l_m *ui;
public slots:
void metodos_9();
void borrar_9();
};

#endif // R_L_M_H
