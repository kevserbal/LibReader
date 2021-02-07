#ifndef ABSTRACTPLUGINFACTORY_H
#define ABSTRACTPLUGINFACTORY_H

#include <QObject>
#include <abstractpluginclass.h>

class LIBREADER_EXPORT AbstractPluginFactory : public QObject
{
    Q_OBJECT
public:
    explicit AbstractPluginFactory(QObject *parent = nullptr);
    virtual AbstractPluginClass *getClass()  = 0;

signals:

};
Q_DECLARE_INTERFACE(AbstractPluginFactory, "cops.demo.AbstractPluginFactory/1.0")

#endif // ABSTRACTPLUGINFACTORY_H
