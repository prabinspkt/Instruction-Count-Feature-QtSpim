#include "counterdialog.h"
#include "ui_counterdialog.h"
#include "QLabel"
#include "instruction_count.h"
#include "QTextStream"

#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;
CounterDialog::CounterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CounterDialog)
{
    ui->setupUi(this);


    QLabel *info_label = new QLabel(this);
    info_label->setText("The number of instructions are as follows:");

    std::map<std::string, int> instruction_count = ReturnFinalCount();
    std::map<std::string,int>::iterator it = instruction_count.begin();

    //int margin_value = 20;
    string break_line = "<br>";
    while (it != instruction_count.end()){
        QTextStream(stdout) << QString::fromStdString(it->first);
        QTextStream(stdout) << "is found "<< it->second << endl;

        QLabel *instruction = new QLabel(this);
        instruction->setText(QString::fromStdString(break_line)+QString::fromStdString(it->first)+": <br>");
        QLabel *count = new QLabel(this);
        count->setIndent(80);
        count->setText(QString::fromStdString(break_line)+QString::fromStdString(to_string(it->second)));
        break_line+= "<br>";
        it++;
        }
}

CounterDialog::~CounterDialog()
{
    delete ui;
}
