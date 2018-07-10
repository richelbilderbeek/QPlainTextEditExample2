#include "QAllTextVisibleEdit.h"

#include <QScrollBar>

QAllTextVisibleEdit::QAllTextVisibleEdit(
  const QString& text,
  QWidget *parent
) : QPlainTextEdit(parent)
{
  this->setPlainText(text);
  QObject::startTimer(1000);
}

QAllTextVisibleEdit::~QAllTextVisibleEdit()
{

}

void QAllTextVisibleEdit::timerEvent(QTimerEvent *)
{
  while (this->verticalScrollBar()->isVisible())
  {
    this->setMinimumHeight(
      this->minimumHeight() + 1
    );
    this->update();
  }
}
