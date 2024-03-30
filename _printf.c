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
		exit(98);
	va_start(args, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			n++, _putchar (*(format + i)); }
		else if (*(format + i) == '%' && *(format + i + 1) == '\0')
			continue;
		else if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			_putchar ('%'), n++, i++; }
		else if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			n = print_char(n, va_arg(args, int));
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			n = print_str(n, va_arg(args, char *));
			i++;
		}
		else if ((*(format + i) == '%') && ((*(format + i + 1) == 'd')
				|| (*(format + i + 1) == 'i')))
		{
			n = print_int(n, va_arg(args, int));
			i++;
		}
		else
			_putchar(*(format + i)), n++;
		i++;
	}
	va_end(args);
	if (n == 0)
		n = -1;
	return (n); }
