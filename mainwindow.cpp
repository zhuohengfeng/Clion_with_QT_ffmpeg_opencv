#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_btn_click()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_click() {
    qDebug() << "on_btn_click";
}
