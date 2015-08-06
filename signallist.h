#ifndef SIGNALLIST_H
#define SIGNALLIST_H

#include <QWidget>

namespace Ui {
class SignalList;
}

class SignalList : public QWidget
{
    Q_OBJECT

public:
    explicit SignalList(QWidget *parent, const char *_label, int _is_src);
    ~SignalList();

    void clear();
    //int addDevice(int index, mapper_db_device dev);
    //void addSignal(int parentindex, mapper_db_signal sig);

    //note: these are just simple representations without
    // underlying functionalities for now
    int addDevice(int index, QString name);
    int addSignal(int parentIndex, QString name);

private:
    Ui::SignalList *ui;
    int is_src;
};

#endif // SignalList_H
