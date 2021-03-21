#ifndef FUNCLIST_H
#define FUNCLIST_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>

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

    QFont       *m_font;
private:
    void initLayout();
};

#endif // FUNCLIST_H
