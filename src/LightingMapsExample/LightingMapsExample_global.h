﻿#ifndef LIGHTINGMAPSEXAMPLE_GLOBAL_H
#define LIGHTINGMAPSEXAMPLE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIGHTINGMAPSEXAMPLE_LIBRARY)
#define LIGHTINGMAPSEXAMPLE_EXPORT Q_DECL_EXPORT
#else
#define LIGHTINGMAPSEXAMPLE_EXPORT Q_DECL_IMPORT
#endif

#endif // LIGHTINGMAPSEXAMPLE_GLOBAL_H
