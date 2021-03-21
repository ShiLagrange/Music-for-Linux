#include "mainwindow.h"

#include <QApplication>
#include "FuncButton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWidget;
    //mainWidget.resize(1100,700);

    mainWidget.show();
//    QWidget mainWidget;
//    QHBoxLayout layout;
//    QString picPatb(":/resource/音乐");
//    QString name("音乐馆");
//    QPalette palette(QPalette::Background, QColor(245, 245, 245));
//    QFont font("宋体", 15, QFont::Bold);
//    FuncButton func(picPatb, name, font);

//    layout.addWidget(&func);
//    mainWidget.setLayout(&layout);
//    mainWidget.resize(400, 300);
//    mainWidget.show();
      return a.exec();
}
