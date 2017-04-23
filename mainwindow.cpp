#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    worker = new task();
    qDebug() << "Worker" << QThread::currentThreadId();
    //QObject::connect(worker, &SIGNAL(tick(void)), this, SLOT(tick(void)));
    //QObject::connect(&this, &MainWindow::startRun,worker,task::setMax);
    QObject::connect(worker, SIGNAL(tick(void)),this, SLOT(tick(void)), Qt::QueuedConnection);
    QObject::connect(this, SIGNAL(startRun(int)),worker, SLOT(startCount(int)), Qt::DirectConnection);
    worker->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setNewValue100(void)
{
    ui->progressBar->setValue(0);
    ui->progressBar->setMaximum(100);
}
void MainWindow::setNewValue1000(void)
{
    ui->progressBar->setValue(0);
    ui->progressBar->setMaximum(1000);
}
void MainWindow::tick(void)
{
    ui->progressBar->setValue(1 + ui->progressBar->value());
}

void MainWindow::start(void)
{
        ui->progressBar->setValue(0);
    int a=ui->progressBar->maximum();
    qDebug() << a;
    emit startRun(a);
}
