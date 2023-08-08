#include "mainwindow.h"
#include "QListWidgetItem"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qint16 i=0;
    ui->setupUi(this);
    ui->lb_time->setText("Время: " + QString::number(i));
if(ui->pb_ss->isChecked()) {i++;ui->lb_time->setText("Время: " + QString::number(i));
}}


MainWindow::~MainWindow()
{
    delete ui;
}

