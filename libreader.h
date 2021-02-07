#ifndef LIBREADER_H
#define LIBREADER_H

#include "LibReader_global.h"
#include <QPluginLoader>
#include "abstractpluginfactory.h"

class LIBREADER_EXPORT LibReader
{
public:
    LibReader();
    void readLib(const QString &file);
    AbstractPluginFactory *getFactory() const;

protected:
    AbstractPluginFactory* factory;
};

#endif // LIBREADER_H
