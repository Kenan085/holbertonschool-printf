#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints character
 * @c: it is a char variable
 *
 * Return: return 0.
 */

int _putchar (char c)
{
	return write (1,&c, 1);
}
