#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete myMapperConfig;
}

void MainWindow::on_pushButtonLoad_clicked()
{
    QString fname = QFileDialog::getOpenFileName(this, tr("Open JSON file.."),
                                                 QString(), tr("JSON-Files (*.json)"));
    myMapperConfig = new MapperJsonConfig(fname);
}
