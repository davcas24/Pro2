#ifndef ADDCLIENTE_H
#define ADDCLIENTE_H
#include "usuario.h"
#include <vector>

using std::vector;

#include <QDialog>

namespace Ui {
class AddCliente;
}

class AddCliente : public QDialog
{
    Q_OBJECT

public:
    explicit AddCliente(QWidget *parent = 0, vector<Usuario*>* users = 0);
    ~AddCliente();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddCliente *ui;
    vector<Usuario*>* users;
};

#endif // ADDCLIENTE_H
