#ifndef WORKERPASS_H
#define WORKERPASS_H

#include <QDialog>
#include "usuario.h"
#include <vector>
#include <string>
#include "aprobado.h"

using std::string;
using std::vector;

namespace Ui {
class WorkerPass;
}

class WorkerPass : public QDialog
{
    Q_OBJECT

public:
    explicit WorkerPass(QWidget *parent = 0, vector<Usuario*> *us = 0, int *p = 0, vector<Aprobado*>* l = 0);
    ~WorkerPass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WorkerPass *ui;
    vector<Usuario*>* users;
    int pos;
    vector <Aprobado*>* list;
};

#endif // WORKERPASS_H
