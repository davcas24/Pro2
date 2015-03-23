#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H
#include "producto.h"
#include <vector>

using std::vector;

#include <QDialog>

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = 0, vector<Producto*>* products = 0);
    ~ClientWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ClientWindow *ui;
    vector<Producto*>* products;
    vector<Producto*>* products1;
};

#endif // CLIENTWINDOW_H
