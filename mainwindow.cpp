// LANChat.cpp
#include "mainwindow.h"
#include <QRandomGenerator>
#include <QScrollBar>
#include <QClipboard>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMessageBox>
#include <QFileDialog>
#include <QSettings>
#include <QMouseEvent> // 添加鼠标事件头文件

LANChat::LANChat(QStackedWidget *parent)
    : QStackedWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    loginWidget=new LoginWidget();
    this->setWindowIcon(QIcon(":/icon.ico"));
    this->addWidget(loginWidget);
    this->setCurrentWidget(loginWidget);
}

LANChat::~LANChat()
{
    delete loginWidget;
}

void LANChat::setupUI()
{
    //this->setWindowIcon(QIcon(":/icon.svg"));
}

// 鼠标按下事件
void LANChat::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

// 鼠标移动事件
void LANChat::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - m_dragPosition);
        event->accept();
    }
}