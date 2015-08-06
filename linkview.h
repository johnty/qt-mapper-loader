#ifndef LINKVIEW_H
#define LINKVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include <QDebug>

namespace Ui {
class LinkView;
}

class LinkView : public QWidget
{
    Q_OBJECT

public:
    explicit LinkView(QWidget *parent = 0);
    ~LinkView();

    void clear();
    void addLink(int offsetL, int offsetR, int direction=0);

private:
    Ui::LinkView *ui;
    QGraphicsScene *scene;
};

#endif // LINKVIEW_H
