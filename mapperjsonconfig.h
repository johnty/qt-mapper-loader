#ifndef MAPPERJSONCONFIG_H
#define MAPPERJSONCONFIG_H

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QIODevice>
#include <QDebug>

class MapperJsonConfig
{
public:
    MapperJsonConfig();
    MapperJsonConfig(const QString filePath, QIODevice::OpenModeFlag mode = QIODevice::ReadWrite);
private:
    bool ParseFile(const QJsonObject& json_doc);
};

#endif // MAPPERJSONCONFIG_H
