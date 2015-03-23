#ifndef WORKERPASSCHANGED_H
#define WORKERPASSCHANGED_H
#include "usuario.h"
#include <string>

using std::string;

#include <QDialog>

namespace Ui {
class WorkerPassChanged;
}

class WorkerPassChanged : public QDialog
{
    Q_OBJECT

public:
    explicit WorkerPassChanged(QWidget *parent = 0, Usuario* p = 0);
    ~WorkerPassChanged();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WorkerPassChanged *ui;
    string pass;
};

#endif // WORKERPASSCHANGED_H
