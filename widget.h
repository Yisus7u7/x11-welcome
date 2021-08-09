#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_bug_clicked();

    void on_status_clicked();

    void on_add_package_clicked();

    void on_join_telegram_clicked();

    void on_join_discord_clicked();

    void on_join_reddit_clicked();

    void on_termux_git_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
