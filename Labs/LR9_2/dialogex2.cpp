#include <QtGui>
#include <QMessageBox>
#include <dialogex2.h>
// Преобразуем входную последовательность символов в кодировку UNICODE
#define RUS( str ) codec->toUnicode(str)
DialogEx2::DialogEx2(QWidget * parent)
    :QDialog(parent)
{
    setupUi(this); // Строим форму, описанную в Ui_DialogEx2
    // связываем сигнал кнопки со слотом onExitClicked
    connect(pushButton, SIGNAL(clicked()), this, SLOT(onExitClicked()));
};
void DialogEx2::onExitClicked()
{
    QTextCodec * codec = QTextCodec::codecForName("Windows-1251");
    // Спрашиваем, закрывать приложение или нет
    if( QMessageBox::question ( this, QString(),
                                RUS("Exit?"), QMessageBox::Yes|QMessageBox::No) ==
            QMessageBox::Yes )
        exit(0);
};
