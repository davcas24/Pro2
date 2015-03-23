#include "workerpass.h"
#include "ui_workerpass.h"
#include "empleado.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

WorkerPass::WorkerPass(QWidget *parent, vector<Usuario*>* users, int *pos, vector<Aprobado*>* l) :
    QDialog(parent),
    ui(new Ui::WorkerPass)
{
    ui->setupUi(this);
    this->users=users;
    this->pos=*pos;
    this->list=l;
}

WorkerPass::~WorkerPass()
{
    delete ui;
}

void WorkerPass::on_pushButton_clicked(){
    string temp = (users->at(pos)->rest_pass());
    Aprobado *p=new Aprobado(temp,false);
    list->push_back(p);
    this->close();
}
