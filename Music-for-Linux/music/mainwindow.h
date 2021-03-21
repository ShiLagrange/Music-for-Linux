#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include "FuncList.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    FuncList *leftFuncListWidget;
    QWidget *topToolWidget;
    QWidget *midContentWidget;
    QWidget *buttomPlayWidget;

    QGridLayout *mainGridLayout;


private:
    void initLayout();
};
#endif // MAINWINDOW_H
