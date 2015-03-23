#ifndef ADDEMP_H
#define ADDEMP_H
#include "usuario.h"
#include <vector>

#include <QDialog>

using std::vector;

namespace Ui {
class AddEmp;
}

class AddEmp : public QDialog
{
    Q_OBJECT

public:
    explicit AddEmp(QWidget *parent = 0, vector<Usuario*>* users = 0);
    ~AddEmp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddEmp *ui;
    vector<Usuario*>* users;
};

#endif // ADDEMP_H
