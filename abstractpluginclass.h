#ifndef ABSTRACTPLUGINCLASS_H
#define ABSTRACTPLUGINCLASS_H

#include <QObject>
#include "LibReader_global.h"

class LIBREADER_EXPORT AbstractPluginClass : public QObject
{
    Q_OBJECT
public:
    explicit AbstractPluginClass(QObject *parent = nullptr);
    virtual void callPluginFunc() = 0;
private:
 signals:
    void myPluginSignal(const QString &message);
};

#endif // ABSTRACTPLUGINCLASS_H
