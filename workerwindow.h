#ifndef WORKERWINDOW_H
#define WORKERWINDOW_H
#include "producto.h"
#include "usuario.h"
#include <vector>

#include <QDialog>

using std::vector;

namespace Ui {
class WorkerWindow;
}

class WorkerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WorkerWindow(QWidget *parent = 0, vector<Producto*>* products = 0, vector<Usuario*>* users = 0);
    ~WorkerWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::WorkerWindow *ui;
    vector<Producto*>* products;
    vector<Usuario*>* users;
};

#endif // WORKERWINDOW_H
