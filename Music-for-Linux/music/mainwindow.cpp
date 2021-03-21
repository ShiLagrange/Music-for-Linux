#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)

{
    leftFuncListWidget = new FuncList;
    topToolWidget = new QWidget;
    midContentWidget = new QWidget;
    buttomPlayWidget = new QWidget;

    mainGridLayout = new QGridLayout;

    initLayout();

}

void MainWindow::initLayout(){
    leftFuncListWidget->setMinimumSize(200, 600);
    leftFuncListWidget->setMaximumWidth(180);

    topToolWidget->setFixedHeight(70);
    topToolWidget->setMinimumWidth(800);
    topToolWidget->setStyleSheet("background-color:rgb(255, 168, 255)");

    midContentWidget->setStyleSheet("background-color:rgb(255, 0, 255)");


    buttomPlayWidget->setFixedHeight(70);
    buttomPlayWidget->setMinimumWidth(800);
    buttomPlayWidget->setStyleSheet("background-color:rgb(255, 255, 0)");

    mainGridLayout->setSpacing(0);// 设置wiget之间的距离
    mainGridLayout->setContentsMargins(0, 0, 0, 0); // 摆脱小部件周围的10px边框
    mainGridLayout->addWidget(leftFuncListWidget, 0, 0, 11, 1);
    mainGridLayout->addWidget(topToolWidget, 0, 1, 1, 5);
    mainGridLayout->addWidget(midContentWidget, 1, 1, 9, 5);
    mainGridLayout->addWidget(buttomPlayWidget, 10, 1, 1, 5);

    this->setLayout(mainGridLayout);

}

MainWindow::~MainWindow()
{
    delete leftFuncListWidget;
    delete topToolWidget;
    delete midContentWidget;
    delete mainGridLayout;
    delete buttomPlayWidget;
}

