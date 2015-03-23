#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H
#include "usuario.h"
#include <string>
#include <vector>
#include "aprobado.h"

using std::vector;
using std::string;

#include <QDialog>

namespace Ui {
class ManagerWindow;
}

class ManagerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = 0, vector<Usuario*>* usus = 0, vector<Aprobado*>* l = 0);
    ~ManagerWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::ManagerWindow *ui;
    vector<Usuario*>* users;
    vector<Aprobado*>* listrecovery;

};

#endif // MANAGERWINDOW_H
