#ifndef LISTTAB_H
#define LISTTAB_H

#include "signallist.h"
#include "linkview.h"

#include <QTabWidget>
#include <QSplitter>
#include <QGroupBox>
#include <QVBoxLayout>

class ListTab : public QTabWidget
{
//    Q_OBJECT

public:
    ListTab(QTabWidget *parent);
    //ListTab(QTabWidget *parent, mapperGUIData data);
    ~ListTab();

    void update();
    void deviceEvent();
    void linkEvent();

    //just testing...
    SignalList* getSourcesList() { return sources; }
    SignalList* getDestList() { return destinations; }

private:
    //ConnectionProps *props;
    SignalList *sources;
    SignalList *destinations;
    LinkView *links;
};

#endif // LISTTAB_H
