// LANChat.h
#ifndef LANChat_H
#define LANChat_H

#include <QWidget>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>
#include <QPushButton>
#include <QLabel>
#include <QStackedWidget>
#include "LoginWidget.h"

class LANChat : public QStackedWidget
{
    Q_OBJECT

public:
    explicit LANChat(QStackedWidget *parent = nullptr);
    ~LANChat();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private slots:

private:
    LoginWidget *loginWidget;
    QPoint m_dragPosition;
    void setupUI();
    void loadSettings();
    void saveSetting();
};

#endif // LANChat_H