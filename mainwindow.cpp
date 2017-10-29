#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);

     ui->tabWidget->setStyleSheet("QTabBar::tab { height: 60px; width: 100px; }");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_heloButton_clicked()
{

}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{

    if(index ==0)
        setStyleSheet("background-color: red");
    if(index ==1)
        setStyleSheet("background-color: green");


}
