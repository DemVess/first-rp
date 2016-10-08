#ifndef FIRSTRP_GLOBAL_H
#define FIRSTRP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FIRSTRP_LIBRARY)
#  define FIRSTRPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FIRSTRPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FIRSTRP_GLOBAL_H
