#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character
 * @c: it is a char variable
 *
 * Return: return 0.
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - prints integer
 * @k: count
 * @s: our integer variable
 *
 * Return: count
 */

int print_int (int k, int s)
{
	int n;
	int rem, i = 0;
	char number[25];

	if (s < 0)
	{
		_putchar ('-');
		n = -1 * s;
		k++;
	}
	else
	{
		n = s;
	}
	if (n == 0)
	{
		_putchar (48);
		k++;
		return (k);
	}
	while (n > 0)
	{
		rem = n % 10;
		number[i] = rem + 48;
		n = n / 10;
		if (n == 0)
		{
			break;
		}
		i++;
	}
	while (i >= 0)
	{
		_putchar (number[i]);
		k++;
		i--;
	}
	return (k);
}

/**
 * print_str - prints string
 * @k: count
 * @s: it is a pointer
 *
 * Return: returns count
 */


int print_str(int k, char *s)
{
	int i = 0;

	if (s)
	{
		while (s[i] != 0)
		{
			_putchar (s[i]);
			i++;
			k++;
		}
	}
	else if (s == NULL)
	{
		_putchar ('(');
		_putchar ('n');
		_putchar ('u');
		_putchar ('l');
		_putchar ('l');
		_putchar (')');
		r = r + 6;
	}
	return (k);
}



/**
 * print_char - prints a character
 * @k: count
 * @c: it is a char variable
 *
 * Return: returns 0.
 */

int print_char(int k, char c)
{
	if (c == 0)
	{
		_putchar(0);
		k = k + 6;
		return (k);
	}
	_putchar(c);
	k++;
	return (k);
}


