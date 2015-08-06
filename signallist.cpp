#include "signallist.h"
#include "ui_signallist.h"

SignalList::SignalList(QWidget *parent, const char *_label, int _is_src) :
    QWidget(parent),
    ui(new Ui::SignalList)
{
    ui->setupUi(this);
    ui->label->setText(_label);
    is_src = _is_src;
}

SignalList::~SignalList()
{
    delete ui;
}

void SignalList::clear()
{
    ui->tree->clear();
}

int SignalList::addDevice(int index, QString name)
{
    QTreeWidgetItem *qdev = new QTreeWidgetItem((QTreeWidget*)0,
                                                QStringList(name));
    ui->tree->insertTopLevelItem(index, qdev);
    return ui->tree->indexOfTopLevelItem(qdev);
}



/*
int SignalList::addDevice(int index, mapper_db_device dev)
{
    QTreeWidgetItem *qdev = new QTreeWidgetItem((QTreeWidget*)0,
                                                QStringList(QString(dev->name)));
    ui->tree->insertTopLevelItem(index, qdev);
    return ui->tree->indexOfTopLevelItem(qdev);
}

void SignalList::addSignal(int parentindex, mapper_db_signal sig)
{
    QTreeWidgetItem *qdev = ui->tree->topLevelItem(parentindex);

    QTreeWidgetItem *qsig = new QTreeWidgetItem();
    qsig->setText(0, QString(sig->name));
    qsig->setText(1, QString(QChar(sig->type)));
    qsig->setText(2, QString::number(sig->length));
    qdev->addChild(qsig);
}*/
