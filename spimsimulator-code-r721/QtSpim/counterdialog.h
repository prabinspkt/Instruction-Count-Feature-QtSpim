#ifndef COUNTERDIALOG_H
#define COUNTERDIALOG_H

#include <QDialog>

namespace Ui {
class CounterDialog;
}

class CounterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CounterDialog(QWidget *parent = nullptr);
    ~CounterDialog();

private:
    Ui::CounterDialog *ui;
};

#endif // COUNTERDIALOG_H
