#ifndef LANCHAT_LOGINWIDGET_H
#define LANCHAT_LOGINWIDGET_H

// 包含由 uic 工具生成的 ui_loginWidget.h
#include "ui_login.h"

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private:
    Ui::loginWidget *ui; // 指向 UI 文件的指针
};

#endif // LANCHAT_LOGINWIDGET_H