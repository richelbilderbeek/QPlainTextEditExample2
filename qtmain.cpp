#include <QApplication>
#include "QAllTextVisibleEdit.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  for (int i = 0; i != 2; ++i)
  {
    QString text = "Short text.";
    if (i > 0)
    {
      text +=
      "This is a very long text that should also be word-wrapped."
      "It is not long enough yet, that's why this sentence is added."
      "It is not long enough yet, that's why this sentence is added."
      "It is not long enough yet, that's why this sentence is added."
      "It is not long enough yet, that's why this sentence is added."
      "Also the QAllTextVisibleEdit must resize vertically to keep displaying all text.";
    }
    auto * const edit = new QAllTextVisibleEdit(text);
    edit->show();
  }
  return a.exec();
}

