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
	return (write(1, &c, 1));
}

/**
 * print_int - prints integer
 * @s: our integer variable
 *
 * Return: count
 */

int print_int (int s)
{
	int n;
	int rem, i = 0;
	char number[25];

	if (s < 0)
	{
		_putchar ('-');
		n = -1 * s;
	}
	else
	{
		n = s;
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
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
		i--;
	}
	return (1);
}

/**
 * print_str - prints string
 * @*s: it is a pointer 
 *
 * Return: returns count
 */


int print_str(char *s)
{
	int i = 0;

	if (s)
	{
		while (s[i] != 0)
		{
			_putchar (s[i]);
			i++;
		}
	}
	else if (s == NULL)
	{
		_putchar (0);
		return (0);
	}
	return (1);
}
