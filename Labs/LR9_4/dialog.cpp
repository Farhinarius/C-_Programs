#include "dialog.h"
#include "ui_dialog.h"
#include <QtGui>
#include <QVBoxLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //ui->setupUi(this);
    line = new QLineEdit(this);
    btn = new QPushButton(this);
    btn->setText("Convert");
    output = new QTextEdit(this);
    output->setReadOnly(true);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(line);
    layout->addWidget(btn);
    layout->addWidget(output);
    setLayout(layout);
    connect(btn, SIGNAL (released()), this, SLOT (btnClick()));
}
void Dialog::btnClick(){
    output->clear();
    QString out = getNumEdit();
    output->append("input: " + out);
    output->append("all lower: " + out.toLower());
    output->append("ALL UPPER: " + out.toUpper());
}

QString Dialog::getNumEdit()
{
    QString str = line->text ();
    return str;
};

