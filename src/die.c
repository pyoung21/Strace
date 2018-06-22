#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "strace.h"

int die(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vfprintf(stderr, fmt, args);
	va_end(args);
	exit(84);
}
