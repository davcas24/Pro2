#include "workerpasschanged.h"
#include "ui_workerpasschanged.h"

WorkerPassChanged::WorkerPassChanged(QWidget *parent, Usuario* p) :
    QDialog(parent),
    ui(new Ui::WorkerPassChanged)
{
    ui->setupUi(this);
    pass=p->getPass();
    ui->label_supass->setText(pass.c_str());
}

WorkerPassChanged::~WorkerPassChanged()
{
    delete ui;
}

void WorkerPassChanged::on_pushButton_clicked()
{
    this->close();
}
