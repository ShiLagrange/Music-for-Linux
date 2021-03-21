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

    widget1 = new QWidget(this);
    widget2 = new QWidget(this);
    vlayou1 = new QVBoxLayout;
    vlayout2 = new QVBoxLayout;

    m_font          =  new QFont("宋体", 10, QFont::Normal);

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
    m_nameLabel->setFont(QFont("宋体", 15, QFont::Bold));

    m_onlineMusLab->setText("在线音乐");
    m_onlineMusLab->setFont(QFont("宋体", 10, QFont::Thin));

    musicTubeButton->setProperty(QString(":/resource/音乐"), QString("音乐馆"), *m_font);
    musicTubeButton->initLayout();
    vedioButton->setProperty(QString(":/resource/视屏"), QString("视屏"), *m_font);
    vedioButton->initLayout();
    radioButton->setProperty(QString(":/resource/电台"), QString("电台"), *m_font);
    radioButton->initLayout();

    vlayou1->addWidget(m_onlineMusLab);
    vlayou1->addWidget(musicTubeButton);
    vlayou1->addWidget(vedioButton);
    vlayou1->addWidget(radioButton);
    widget1->setLayout(vlayou1);

    m_localMusLab->setText("  本地音乐");
    m_localMusLab->setFont(QFont("宋体", 10, QFont::Thin));
    localButton->setProperty(QString(":/resource/电脑"), QString("本地和下载"), *m_font);
    localButton->initLayout();
    recentPlayButton->setProperty(QString(":/resource/最近播放"), QString("最近播放"), *m_font);
    recentPlayButton->initLayout();

    vlayout2->addWidget(m_localMusLab, Qt::AlignLeft);
    vlayout2->addWidget(localButton, Qt::AlignLeft);
    vlayout2->addWidget(recentPlayButton, Qt::AlignLeft);
    widget2->setLayout(vlayout2);

    m_gridLayout->setSpacing(0);
    m_gridLayout->addWidget(m_iconLabel, 0, 0, 1, 1, Qt::AlignRight);
    m_gridLayout->addWidget(m_nameLabel, 0, 1, 1, 1, Qt::AlignLeft);
    m_gridLayout->setRowStretch(0, 100);
    m_gridLayout->addWidget(widget1, 2, 0, 1, 2, Qt::AlignCenter);
    m_gridLayout->setColumnStretch(2, 10);
    m_gridLayout->addWidget(widget2, 3, 0, 10, 10, Qt::AlignCenter);
    m_gridLayout->setColumnStretch(3, 800);

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
    delete widget1;
    delete widget2;

    delete vlayou1;
    delete vlayout2;
}
