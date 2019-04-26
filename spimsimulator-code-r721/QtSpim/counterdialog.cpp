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

    // Create a new QLabel that will display a sentence
    QLabel *info_label = new QLabel(this);
    info_label->setText("The number of instructions are as follows:");

    // Get the information about count of instructions
    std::map<std::string, int> instruction_count = ReturnFinalCount();
    // Define an iterator for the map holding the instrution count information
    std::map<std::string,int>::iterator it = instruction_count.begin();

    //int margin_value = 20;
    string break_line = "<br>";

    // Iterate over all the instructions in the map and post them to the QWidget in a particular format
    while (it != instruction_count.end()){
        QLabel *instruction = new QLabel(this);
        instruction->setText(QString::fromStdString(break_line)+QString::fromStdString(it->first)+": <br>");
        QLabel *count = new QLabel(this);
        count->setIndent(80);
        count->setText(QString::fromStdString(break_line)+QString::fromStdString(to_string(it->second)));
        break_line+= "<br>";
        it++;
        }

    // Create a new QLabel that will display the cycle count information
    QLabel *cycle_label = new QLabel(this);
    cycle_label->setText(QString::fromStdString(break_line)+"The number of total cycle count is "+ QString::fromStdString(to_string(cycle_counter))+".");
}

CounterDialog::~CounterDialog()
{
    delete ui;
}
