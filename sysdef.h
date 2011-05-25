/* -*- C++ -*-
 * File:        sysdef.h
 * Created:     Mon Nov 01 01:12:02 2010
 * Description: compiler-dependent macro definitions.
 *
 * $Id$
 */

#ifndef SYSDEF_H
#define SYSDEF_H

#if defined(_MSC_VER) || defined(__MINGW32__)
#   if defined(SYSPP_BUILD_DLL)
#	define DLLIMPORT		__declspec(dllexport)
#   elif defined(SYSPP_DLL)
#	define DLLIMPORT		__declspec(dllimport)
#   else
#	define DLLIMPORT
#   endif
#else
#   define DLLIMPORT
#endif

#endif /* SYSDEF_H */