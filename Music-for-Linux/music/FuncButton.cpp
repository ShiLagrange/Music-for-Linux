#include "FuncButton.h"
#include <QString>
#include <string>
#include <QPainter>

FuncButton::FuncButton(QWidget *parent)
    : QDialog(parent)
{

}

FuncButton::FuncButton(QString picPath, QString name, QFont font, QWidget *parent)
    : QDialog(parent)
{
    m_picPath = picPath;
    m_name = name;
    m_clicked = false;
    m_font = font;
    m_color.setRgb(240,240,240);
    initLayout();

    //connect(this, SIGNAL(clicked()), this, SLOT(clickedWidget()));
    //this->setPalette(QPalette(QPalette::Background, QColor(245, 245, 245)));
    //this->setAutoFillBackground(true); //此处不可设置自动填充，否则会影响后面paintEvent

}

void FuncButton::setProperty(QString picPath, QString name, QFont font){
    m_picPath = picPath;
    m_name = name;
    m_clicked = false;
    m_font = font;
    m_color.setRgb(240,240,240);
}

void FuncButton::initLayout(){
    m_iconLab.setPixmap(m_picPath+"b.png");
    m_iconLab.setAutoFillBackground(true);
    m_iconLab.setScaledContents(true);
    m_iconLab.setMaximumSize(20, 20);
    m_iconLab.setGeometry(QRect(50, 7,30,30));
    m_iconLab.setParent(this);

    m_nameLab.setText(m_name);
    m_nameLab.setFont(m_font);
    m_nameLab.setGeometry(QRect(80, 0, 150, 30));
    m_nameLab.setParent(this);

    this->setFixedSize(150, 40);
}


void FuncButton::mouseReleaseEvent(QMouseEvent * ev){
    m_clicked = m_clicked ? false : true;
    if(m_clicked){
        m_iconLab.setPixmap(m_picPath+"w.png");
        m_nameLab.setStyleSheet("color:white;");
        m_color.setRgb(31,204,148);
        m_iconLab.setPalette(QPalette(QPalette::Window, m_color));
        this->setPalette(QPalette(QPalette::Window, m_color));
        printf("FuncButton true\n");
    }
    else{
        m_iconLab.setPixmap(m_picPath+"b.png");
        m_nameLab.setStyleSheet("color:black;");
        m_color.setRgb(240,240,240);
        m_iconLab.setPalette(QPalette(QPalette::Window, m_color));
        this->setPalette(QPalette(QPalette::Window, m_color));
        printf("FuncButton false\n");
    }
    this->update();
}



void FuncButton::enterEvent(QEvent *event){
    if(!m_clicked){
        m_color.setRgb(216,216,216);
        m_iconLab.setPalette(QPalette(QPalette::Window, m_color));
    }

    this->update();
}

void FuncButton::leaveEvent(QEvent *event){

    if(!m_clicked){
       m_color.setRgb(240,240,240);
       m_iconLab.setPalette(QPalette(QPalette::Window, m_color));
    }

    this->update();
}

void FuncButton::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    printf("paintEvent\n");
    painter.setRenderHint(QPainter::Antialiasing);  // 反锯齿;
    if(m_clicked){
        painter.setBrush(QBrush(m_color));
    }
    else{
        painter.setBrush(QBrush(m_color));
    }
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width() - 1);
    rect.setHeight(rect.height() - 1);
    painter.drawRoundedRect(rect, 15, 15);

    QWidget::paintEvent(event);
}

FuncButton::~FuncButton(){

}
