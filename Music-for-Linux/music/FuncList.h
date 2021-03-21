#ifndef FUNCLIST_H
#define FUNCLIST_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QVBoxLayout>
#include "FuncButton.h"

class FuncList : public QWidget
{
    Q_OBJECT
public:
    FuncList(QWidget *parent = nullptr);
    virtual ~FuncList();


private:
    QGridLayout *m_gridLayout;

    QLabel      *m_iconLabel;
    QLabel      *m_nameLabel;
    QPalette    m_palette;

    QLabel      *m_onlineMusLab;
    QLabel      *m_localMusLab;

    FuncButton  *musicTubeButton;
    FuncButton  *vedioButton;
    FuncButton  *radioButton;
    FuncButton  *localButton;
    FuncButton  *recentPlayButton;

    QWidget     *widget1;
    QVBoxLayout *vlayou1;
    QWidget     *widget2;
    QVBoxLayout *vlayout2;

    QFont       *m_font;
private:
    void initLayout();
};

#endif // FUNCLIST_H
