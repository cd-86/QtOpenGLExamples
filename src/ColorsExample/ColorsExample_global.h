#ifndef COLORSEXAMPLE_GLOBAL_H
#define COLORSEXAMPLE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(COLORSEXAMPLE_LIBRARY)
#define COLORSEXAMPLE_EXPORT Q_DECL_EXPORT
#else
#define COLORSEXAMPLE_EXPORT Q_DECL_IMPORT
#endif

#endif // COLORSEXAMPLE_GLOBAL_H
