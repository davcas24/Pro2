#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "usuario.h"
#include "gerente.h"
#include "producto.h"
#include "empleado.h"
#include "cliente.h"
#include "aprobado.h"


using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, vector<Usuario*> *usu = 0, vector<Producto*> *pro = 0, vector<Aprobado*>* l = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    //void on_label_4_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    vector<Producto*> *products;
    vector<Usuario*> *users;
    int *pos;
    vector<Aprobado*>* listrecovery;
};

#endif // MAINWINDOW_H
