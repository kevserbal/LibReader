#ifndef LIBREADER_GLOBAL_H
#define LIBREADER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBREADER_LIBRARY)
#  define LIBREADER_EXPORT Q_DECL_EXPORT
#else
#  define LIBREADER_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBREADER_GLOBAL_H
