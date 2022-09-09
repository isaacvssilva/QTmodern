#include "myforms.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MyForms w;
  w.show();
  return a.exec();
}
