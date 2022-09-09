#ifndef MYFORMS_H
#define MYFORMS_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MyForms; }
QT_END_NAMESPACE

class MyForms : public QMainWindow
{
  Q_OBJECT

public:
  MyForms(QWidget *parent = nullptr);
  ~MyForms();

private slots:
  void on_btn_enviar_clicked();

private:
  Ui::MyForms *ui;
};
#endif // MYFORMS_H
