#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "base64.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("FREE BASE64 DECODER NO VIRUS!!!");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QString text = ui->textEdit->toPlainText();
    std::string realtext = text.toStdString();
    std::string decoded = base64_decode(realtext);


    ui->textEdit->setText(QString::fromStdString(decoded));
    ui->textEdit->copy();
}
