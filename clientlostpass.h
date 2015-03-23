#ifndef CLIENTLOSTPASS_H
#define CLIENTLOSTPASS_H

#include <QDialog>
#include "usuario.h"
#include "vector"

using std::vector;

namespace Ui {
class ClientLostPass;
}

class ClientLostPass : public QDialog
{
    Q_OBJECT

public:
    explicit ClientLostPass(QWidget *parent = 0,string *pass = 0);
    ~ClientLostPass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ClientLostPass *ui;
    string pass;
};

#endif // CLIENTLOSTPASS_H
