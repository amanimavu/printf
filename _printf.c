#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 *_printf - prints to the output
 *
 *@format: pointer
 *
 *Return: input len
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);

	done = vfprintf(stdout, format, arg);
	va_end(arg);

	return (done);

}