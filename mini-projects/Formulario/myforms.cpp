#include "myforms.h"
#include "ui_myforms.h"

MyForms::MyForms(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MyForms)
{
  ui->setupUi(this);
}

MyForms::~MyForms()
{
  delete ui;
}


void MyForms::on_btn_enviar_clicked(){

  //pegando informações inseridas no forms
  QString nome, sobrenome, telefone, dataNasc;
  nome = ui->line_nome->text();
  sobrenome = ui->line_sobrenome->text();
  telefone = ui->line_tel->text();
  dataNasc = ui->line_nasc->text();

  QMessageBox::about(this,
                     "Dados cadastrais", "Seu nome é: " + nome + " " + sobrenome + "\n"
                     + "telefone: " + telefone + "\n"
                     + "data de nascimento: " + dataNasc);
  //limpando campos preenchidos
   ui->line_nome->clear();
   ui->line_sobrenome->clear();
   ui->line_tel->clear();
   ui->line_nasc->clear();
   //colocando cursor no primeiro label
   ui->line_nome->setFocus();
}
