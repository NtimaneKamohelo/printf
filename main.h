#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);

#endif
