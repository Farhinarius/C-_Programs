#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    QLineEdit *line;
    QPushButton *btn;
    QTextEdit *output;
    QString getNumEdit();

    virtual ~Dialog(){};

private:
    Ui::Dialog *ui;
private slots:
    void btnClick();
};

#endif // DIALOG_H
