#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clot02.h"
#include <QDebug>
#include <QTimer>
#include <QTime>
#include <chrono>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   // QTimer::QTimer(QObject *parent= nullptr);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void get_pb_r();
    void get_pb_ss();
private slots:
    void on_pb_round_clicked();

    void on_pb_ss_toggled(bool checked);

    void on_pb_clear_clicked();

private:
    Ui::MainWindow *ui;
    Clot02 *pb_r;
    QTimer *time;
};
#endif // MAINWINDOW_H
