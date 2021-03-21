#ifndef FUNCBUTTON_H
#define FUNCBUTTON_H
#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QFont>
#include <QPalette>
#include <string>
#include <QVBoxLayout>
class FuncButton : public QDialog
{
    Q_OBJECT
public:
    FuncButton(QWidget *parent = 0);
    FuncButton(QString picPath, QString name, QFont font, QWidget *parent = nullptr);
    void initLayout();
    void setProperty(QString picPath, QString name, QFont font);
    ~FuncButton();
private:
    QString     m_picPath;
    QString     m_name;
    QLabel      m_nameLab;
    QLabel      m_iconLab;
    QPalette    m_palette;
    QFont       m_font;
    QColor      m_color;
    bool        m_clicked;

private:
    void paintEvent(QPaintEvent*) override;


protected:
    virtual void mouseReleaseEvent(QMouseEvent * ev) override;
    virtual void enterEvent(QEvent *event) override;
    virtual void leaveEvent(QEvent *event) override;
};

#endif // FUNCBUTTON_H
