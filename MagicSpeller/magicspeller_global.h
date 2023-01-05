#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(MAGICSPELLER_LIB)
#  define MAGICSPELLER_EXPORT Q_DECL_EXPORT
# else
#  define MAGICSPELLER_EXPORT Q_DECL_IMPORT
# endif
#else
# define MAGICSPELLER_EXPORT
#endif
