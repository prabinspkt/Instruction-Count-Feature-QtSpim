#include "counterdialog.h"
#include "ui_counterdialog.h"
#include "QLabel"
#include "instruction_count.h"
#include "QTextStream"

#include <iostream>
#include <map>
#include <string>
#include <iterator>

CounterDialog::CounterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CounterDialog)
{
    ui->setupUi(this);

    QLabel *info_label = new QLabel(this);
    info_label->setText("The number of instructions are as follows:");

    std::map<std::string, int> instruction_count = ReturnFinalCount();
    std::map<std::string,int>::iterator it = instruction_count.begin();

    int margin_value = 20;
    while (it != instruction_count.end()){
        QTextStream(stdout) << QString::fromStdString(it->first);
        QTextStream(stdout) << "is found "<< it->second << endl;

        QLabel *instruction = new QLabel(this);
        instruction->setText(QString::fromStdString(it->first)+":<br>");
        instruction->setMargin(margin_value);
        QLabel *count = new QLabel(this);
        count->setMargin(margin_value);
        count->setIndent(90);
        count->setNum(it->second);
        QLabel *new_line = new QLabel(this);
        new_line->setText("\n\n");
        it++;
        margin_value += 20;
        }
}

CounterDialog::~CounterDialog()
{
    delete ui;
}
