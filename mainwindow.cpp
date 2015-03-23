#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <vector>
#include "usuario.h"
#include "gerente.h"
#include "producto.h"
#include "empleado.h"
#include "cliente.h"
#include "clientlostpass.h"
#include  <iostream>
#include "error.h"
#include "managerwindow.h"
#include "clientwindow.h"
#include "workerpass.h"
#include "workerwindow.h"
#include "workerpasschanged.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent, vector<Usuario*> *users, vector<Producto*> *products, vector<Aprobado*>* listrecovery) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->users=users;
    this->products=products;
    this->listrecovery=listrecovery;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pos;
    for(int i=0;i<users->size();i++){
        delete users->at(i);
    }
    for(int i=0;i<products->size();i++){
        delete products->at(i);
    }
    for(int i=0;i<listrecovery->size();i++){
        delete listrecovery->at(i);
    }
}

void MainWindow::on_pushButton_clicked(){
   string usuario = ui->tf_usuario->text().toStdString();
   string contra=ui->tf_password->text().toStdString();
   bool noesta=true;
   Error mistake(this);
   int es=0;
   for(int j=0;j<listrecovery->size();j++){
        if(listrecovery->at(j)->getUser()==usuario){
                es=j;
                //cout<<"ESTO ES"<<es;
                break;
            }
       }
    //cout<<listrecovery->size();
   for(int i=0;i<users->size();i++){
        if(listrecovery->size()>0){
            if(usuario==users->at(i)->getUsu()&&listrecovery->at(es)->getApr()==true){
                Usuario* ps=users->at(i);
                WorkerPassChanged c(0,ps);
                c.setModal(true);
                c.exec();
                noesta=true;
                break;
            }
        }
        if(usuario==users->at(i)->getUsu()&&contra==users->at(i)->getPass()){
              cout<<usuario<<"   "<<contra<<"  "<<endl;
              noesta=true;
              pos=new int(i);
              ui->tf_usuario->setText("");
              ui->tf_password->setText("");
              break;
        }else if(usuario==users->at(i)->getUsu()&&contra!=users->at(i)->getPass()){
              pos=new int(i);
              noesta=false;
              ui->tf_password->setText("");
              break;
        }else{
              ui->tf_password->setText("");
              noesta=false;
        }
  }
  if(noesta==false){
    mistake.setModal(true);
    mistake.exec();
  }else{
      if(users->at(*pos)->getTypeOfClass()==1&&usuario=="admin"){
          ManagerWindow man(0,users,listrecovery);
          man.setModal(true);
          man.exec();
      }else if(users->at(*pos)->getTypeOfClass()==3){
          WorkerWindow ww(0,products,users);
          ww.setModal(true);
          ww.exec();
      }else if(users->at(*pos)->getTypeOfClass()==3){
          ClientWindow cw(0,products);
          cw.setModal(true);
          cw.exec();
      }
  }
}


void MainWindow::on_pushButton_2_clicked(){
    if(users->at(*pos)->getTypeOfClass()==2){
        string *argu = new string(users->at(*pos)->rest_pass());
        ClientLostPass c(0,argu);
        c.setModal(true);
        c.exec();
        delete argu;
    }else if(users->at(*pos)->getTypeOfClass()==3){
        WorkerPass wp(0,users,pos,listrecovery);
        wp.setModal(true);
        wp.exec();
    }
}

