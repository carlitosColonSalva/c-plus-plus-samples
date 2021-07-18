#include <cstdlib> // know system

char get_system()
{
char sysV =' ';
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
sysV ='w';
#else
sysV ='l';
#endif
return sysV;
} // end of get_system()