#include "main.h"

/**
 * _printf - print function
 * @format: format
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;

	if (format == NULL)
	{
		exit(98);
	}
	va_start(args, format);
	while (*(format + i) != '\0')
	{
		if (
	}
}
