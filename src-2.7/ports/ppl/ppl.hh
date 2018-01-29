/* ppl.hh - Stub Header  */
#ifndef __STUB__PPL_HH__
#define __STUB__PPL_HH__

#if defined(__x86_64__) || \
    defined(__sparc64__) || \
    defined(__arch64__) || \
    defined(__powerpc64__) || \
    defined (__s390x__)
# include "ppl-64.h"
#else
# include "ppl-32.h"
#endif

#endif /* __STUB__PPL_HH__ */
