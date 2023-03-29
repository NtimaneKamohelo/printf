#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
switch (*(++format))
{
case 'c':
putchar(va_arg(args, int));
count++;
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
putchar('%');
count++;
break;
default:
putchar('%');
putchar(*format);
count += 2;
break;
}
}
else
{
putchar(*format);
count++;
}

format++;
}

va_end(args);

return count;
}
