
#ifndef OS_MACROS_H
#define OS_MAKROS_H

#ifdef __unix__

    #define OS_UNIX

#elif defined(_WIN32) || defined(WIN32)

    #define OS_WINDOWS

#else
    
    #define OS_OTHER

#endif

#endif // OS_MACROS_H
