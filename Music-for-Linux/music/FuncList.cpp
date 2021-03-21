#include "FuncList.h"
#include <QFont>

FuncList::FuncList(QWidget *parent)
    : QWidget(parent)
{
    m_iconLabel     = new QLabel;
    m_nameLabel     = new QLabel;

    m_onlineMusLab  = new QLabel;
    m_localMusLab   = new QLabel;
    m_gridLayout    = new QGridLayout;

    musicTubeButton = new FuncButton;
    vedioButton     = new FuncButton;
    radioButton     = new FuncButton;
    localButton     = new FuncButton;
    recentPlayButton = new FuncButton;
    m_font          =  new QFont("宋体", 12, QFont::Bold);

    initLayout();
}

void FuncList::initLayout(){
    m_palette.setColor(QPalette::Background, QColor(240, 240, 240));

    m_iconLabel->setPixmap(QPixmap(":/resource/云音乐-01.png"));
    m_iconLabel->setAutoFillBackground(true);
    m_iconLabel->setScaledContents(true);
    m_iconLabel->setMaximumSize(40, 40);
    m_iconLabel->setPalette(m_palette);

    m_nameLabel->setText(" ShrM");
    m_nameLabel->setAlignment(Qt::AlignCenter);
    m_nameLabel->setPalette(m_palette);
    m_nameLabel->setAutoFillBackground(true);
    m_nameLabel->setMaximumSize(100, 40);
    m_nameLabel->setFont(QFont("Ubuntu", 15, QFont::Bold));

    m_onlineMusLab->setText("在线音乐");

    musicTubeButton->setProperty(QString(":/resource/音乐"), QString("音乐馆"), *m_font);
    musicTubeButton->initLayout();
    vedioButton->setProperty(QString(":/resource/视屏"), QString("视屏"), *m_font);
    vedioButton->initLayout();
    radioButton->setProperty(QString(":/resource/电台"), QString("电台"), *m_font);
    radioButton->initLayout();

    m_localMusLab->setText("本地音乐");

    localButton->setProperty(QString(":/resource/电脑"), QString("本地和下载"), *m_font);
    localButton->initLayout();
    recentPlayButton->setProperty(QString(":/resource/最近播放"), QString("最近播放"), *m_font);
    recentPlayButton->initLayout();

    m_gridLayout->setSpacing(0);
    m_gridLayout->addWidget(m_iconLabel, 0, 0, 1, 1, Qt::AlignRight);
    m_gridLayout->addWidget(m_nameLabel, 0, 1, 1, 1, Qt::AlignLeft);

    m_gridLayout->addWidget(m_onlineMusLab, 3, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->addWidget(musicTubeButton, 4, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->addWidget(vedioButton, 5, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->addWidget(radioButton, 6, 0, 1, 2, Qt::AlignCenter);

    m_gridLayout->addWidget(m_localMusLab, 8, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->addWidget(localButton, 9, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->addWidget(recentPlayButton, 10, 0, 1, 2, Qt::AlignCenter);

    this->setLayout(m_gridLayout);
    this->setPalette(m_palette);

    this->setAutoFillBackground(true);
}

FuncList::~FuncList()
{

    delete m_onlineMusLab;
    delete m_localMusLab;

    delete m_iconLabel;
    delete m_nameLabel;

    delete musicTubeButton;
    delete vedioButton;
    delete radioButton;
    delete localButton;
    delete recentPlayButton;

    delete m_gridLayout;
}
