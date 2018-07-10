#ifndef QALLTEXTVISIBLEEDIT_H
#define QALLTEXTVISIBLEEDIT_H

#include <QPlainTextEdit>

class QAllTextVisibleEdit : public QPlainTextEdit
{
  Q_OBJECT

public:
  explicit QAllTextVisibleEdit(
    const QString& text = "",
    QWidget *parent = 0
  );
  ~QAllTextVisibleEdit();

private:

private slots:
  void timerEvent(QTimerEvent *e) override;
};

#endif // QALLTEXTVISIBLEEDIT_H
