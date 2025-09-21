#include "LoginWidget.h"
#include "ui_login.h" // 包含生成的头文件
#include <QFileDialog>

LoginWidget::LoginWidget(QWidget* parent) : QWidget(parent), ui(new Ui::loginWidget)
{
    ui->setupUi(this); // 加载 UI 文件并设置到当前窗口
    ui->askLabel->setStyleSheet("color: rgb(0,0,255)");
    connect(ui->closeButton, &QPushButton::clicked, this, &QApplication::quit);
    connect(ui->browseButton,&QPushButton::clicked,this,[=] {
        ui->key->setText(QFileDialog::getOpenFileName(this,
    "打开文件",
    "/home",
    "LANChat密钥 (LANChat.key)"));
    });

}

LoginWidget::~LoginWidget()
{
    delete ui;
}