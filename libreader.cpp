#include "libreader.h"

LibReader::LibReader() {
    this->factory = nullptr;
}

void LibReader::readLib(const QString &file) {
    QPluginLoader loader(file);

    this->factory = (AbstractPluginFactory *)loader.instance();
    qDebug() << "Factory loaded";
    qDebug() << "Error" << loader.errorString();

}

AbstractPluginFactory *LibReader::getFactory() const {
    return factory;
}
