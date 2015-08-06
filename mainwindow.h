#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "mapperjsonconfig.h"
#include "listtab.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void resizeEvent(QResizeEvent *event );

private slots:
    void on_pushButtonLoad_clicked();

private:
    Ui::MainWindow *ui;
    ListTab* myListTab;
    MapperJsonConfig *myMapperConfig;
};

#endif // MAINWINDOW_H
