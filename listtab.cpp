#include "listtab.h"
#include <math.h>
#include <QSplitter>

ListTab::ListTab(QTabWidget *parent)
{
//    data = _data;
//    QGridLayout *layout = new QGridLayout(this);
//    layout->setContentsMargins(0, 0, 0, 0);
//    QSplitter *splitter = new QSplitter(Qt::Vertical, this);
    QVBoxLayout *splitter = new QVBoxLayout(this);
    splitter->setContentsMargins(0, 0, 0, 0);

    parent->insertTab(0, this, QString("List"));

//    props = new ConnectionProps;
//    splitter->insertWidget(0, props);

    QWidget *lists = new QWidget();
    splitter->insertWidget(1, lists);
    splitter->setStretch(0, 1);
    splitter->setStretch(1, 3);
    QHBoxLayout *listLayout = new QHBoxLayout;
    listLayout->setContentsMargins(0, 0, 0, 0);
    listLayout->setSpacing(0);
    lists->setLayout(listLayout);

    sources = new SignalList(this, " Sources", 1);
    listLayout->insertWidget(0, sources);
    links = new LinkView;
    listLayout->insertWidget(1, links);
    destinations = new SignalList(this, " Destinations", 0);
    listLayout->insertWidget(2, destinations);
    listLayout->setStretch(0, 2);
    listLayout->setStretch(1, 1);
    listLayout->setStretch(2, 2);
}

ListTab::~ListTab()
{
    ;
}

void ListTab::deviceEvent()
{
    printf("DEVICE EVENT (list)\n");
    sources->clear();
    destinations->clear();

    //mapper_db_device *pdev = mapper_db_get_all_devices(data->db);
//    printf("data: %p\n", data);
    //mapper_db_signal *psig;
 /*   while (pdev) {
        if ((*pdev)->num_outputs > 0) {
            sources->addDevice(0, *pdev);
            psig = mapper_db_get_outputs_by_device_name(data->db, (*pdev)->name);
            while (psig) {
                if ((*psig)->is_output)
                    sources->addSignal(0, *psig);
                psig = mapper_db_signal_next(psig);
            }
        }
        if ((*pdev)->num_inputs > 0) {
            destinations->addDevice(0, *pdev);
            psig = mapper_db_get_inputs_by_device_name(data->db, (*pdev)->name);
            while (psig) {
                if (!(*psig)->is_output)
                    destinations->addSignal(0, *psig);
                psig = mapper_db_signal_next(psig);
            }
        }
        pdev = mapper_db_device_next(pdev);
    }
    */
}

void ListTab::linkEvent()
{ /*
    printf("ListTab: linkevent\n");
    links->clear();
    mapper_db_link *plnk = mapper_db_get_all_links(data->db);
    while (plnk) {
        // find source offset
        // find destination offset
        // TODO: handler R and L scroll amounts
        links->addLink(rand()%100, rand()%100);
        plnk = mapper_db_link_next(plnk);
    }

    */
//    if (data->linkFlags & (1 << MDB_NEW)) {
//        // need to add new nodes
//        mapper_db_link *plnk = mapper_db_get_all_links(data->db);
//        while (plnk) {
//            bool exists = false;
//            // check if link already exists
//            foreach (QGraphicsItem *item, scene->items()) {
//                if (GraphEdge *edge = qgraphicsitem_cast<GraphEdge *>(item)) {
//                    if ((strcmp((*plnk)->src_name, edge->sourceNode()->name) == 0)
//                            && (strcmp((*plnk)->dest_name, edge->destNode()->name) == 0)) {
//                        // link already exists
//                        exists = true;
//                        break;
//                    }
//                }
//                if (exists)
//                    break;
//            }
//            if (!exists) {
//                GraphNode *src = 0, *dest = 0;
//                // find source node
//                foreach (QGraphicsItem *item, scene->items()) {
//                    if (GraphNode *node = qgraphicsitem_cast<GraphNode *>(item)) {
//                        if (strcmp((*plnk)->src_name, node->name) == 0) {
//                            src = node;
//                            break;
//                        }
//                    }
//                }
//                if (!src) {
//                    plnk = mapper_db_link_next(plnk);
//                    continue;
//                }
//                // find destination node
//                foreach (QGraphicsItem *item, scene->items()) {
//                    if (GraphNode *node = qgraphicsitem_cast<GraphNode *>(item)) {
//                        if (strcmp((*plnk)->dest_name, node->name) == 0) {
//                            dest = node;
//                            break;
//                        }
//                    }
//                }
//                if (dest)
//                    scene->addItem(new GraphEdge(this, src, dest));
//            }
//            plnk = mapper_db_link_next(plnk);
//        }
//    }
//    if (data->linkFlags & (1 << MDB_REMOVE)) {
//        foreach (QGraphicsItem *item, scene->items()) {
//            if (GraphEdge *edge = qgraphicsitem_cast<GraphEdge *>(item)) {
//                // check if link exists in db
//                mapper_db_link lnk = mapper_db_get_link_by_src_dest_names(data->db,
//                                                                          edge->sourceNode()->name, edge->destNode()->name);
//                if (!lnk) {
//                    edge->sourceNode()->removeEdge(edge);
//                    edge->destNode()->removeEdge(edge);
//                    scene->removeItem(edge);
//                }
//            }
//        }
//    }
}

void ListTab::update()
{
    ;
}
