#include "clientlostpass.h"
#include "ui_clientlostpass.h"
#include "vector"

using std::vector;

ClientLostPass::ClientLostPass(QWidget *parent, string *pass) :
    QDialog(parent),
    ui(new Ui::ClientLostPass)
{
    ui->setupUi(this);
    this->pass = *pass;
    ui->label_pass->setText(this->pass.c_str());
}

ClientLostPass::~ClientLostPass()
{
    delete ui;
}

void ClientLostPass::on_pushButton_clicked()
{
    this->close();
}
