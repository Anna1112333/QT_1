#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QListWidgetItem"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pb_r = new Clot02(this);
    time = new QTimer(this);
    time->setInterval(100);
    time->start();
    ui->pb_round->setChecked(true);
    ui->pb_ss->toggle();
    connect (pb_r, &Clot02::sig_pb_r, this, &MainWindow::get_pb_r);
    connect (pb_r, &Clot02::sig_pb_ss, this, &MainWindow::get_pb_ss);
}

MainWindow::~MainWindow(){   delete ui;}

void MainWindow::get_pb_r()
{
      ui->tbr->append("123");
}
void MainWindow::get_pb_ss()
{
   ui->lb_time->setText("Время после старта: ");
}
void MainWindow::on_pb_round_clicked()
{
    if(ui->pb_round->isEnabled())
        pb_r->SendSignal_r();
}
void MainWindow::on_pb_ss_toggled(bool agv)
{
    if(agv) ui->pb_ss->setText("Стоп");
    else ui->pb_ss->setText("Старт");
   if(ui->pb_ss->isChecked())
        pb_r->SendSignal_ss();
}
void MainWindow::on_pb_clear_clicked()
{
    ui->lb_time->setText("Время");
}

