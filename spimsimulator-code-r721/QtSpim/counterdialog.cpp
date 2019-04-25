#include "counterdialog.h"
#include "ui_counterdialog.h"

CounterDialog::CounterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CounterDialog)
{
    ui->setupUi(this);
}

CounterDialog::~CounterDialog()
{
    delete ui;
}
