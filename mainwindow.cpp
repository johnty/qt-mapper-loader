#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myMapperConfig = NULL;

    myListTab = new ListTab(ui->tabWidget);
    ui->tabWidget->addTab(myListTab, "Connections");
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

}

MainWindow::~MainWindow()
{
    delete ui;
    if (myMapperConfig != NULL)
        delete myMapperConfig;
}

void MainWindow::on_pushButtonLoad_clicked()
{
    QString fname = QFileDialog::getOpenFileName(this, tr("Open JSON file.."),
                                                 QString(), tr("JSON-Files (*.json)"));
    myMapperConfig = new MapperJsonConfig(fname);
    myListTab->getSourcesList()->addDevice();
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    //qDebug() << "ui:         " << ui->centralWidget->size();
}
