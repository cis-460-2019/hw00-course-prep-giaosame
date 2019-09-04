#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidget>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    cnt = 0;
    ui->setupUi(this);
    connect(ui->pushBtn, SIGNAL(clicked(bool)), ui->spinBox, SLOT(stepUp()));
    connect(ui->pushBtn, SIGNAL(clicked(bool)), this, SLOT(slot_addItemToListWidget()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_addItemToListWidget()
{
    QString itemStr = "NEW ITEM " + QString::number(cnt++);
    QListWidgetItem *item = new QListWidgetItem(itemStr);
    ui->listWidget->addItem(item);
}
