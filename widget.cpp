//created by @Yisus7u7 <jesuspixel5@gmail.com>

#include "widget.h"
#include "ui_widget.h"
#include <stdio.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_bug_clicked()
{
    system("termux-open-url https://github.com/termux/x11-packages/issues/new/choose");
}

void Widget::on_status_clicked()
{
    system("termux-open-url https://github.com/termux/x11-packages/actions");
}

void Widget::on_add_package_clicked()
{
    system("termux-open-url https://github.com/termux/x11-packages/issues/new/choose");
}

void Widget::on_join_telegram_clicked()
{
    system("termux-open-url https://telegram.me/termux24x7");
}

void Widget::on_join_discord_clicked()
{
    system("termux-open-url https://discord.gg/HXpF69X");
}

void Widget::on_join_reddit_clicked()
{
    system("termux-open-url https://www.reddit.com/r/termux");
}

void Widget::on_termux_git_clicked()
{
    system("termux-open-url https://github.com/termux/");
}
