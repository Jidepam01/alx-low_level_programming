#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int i)
{
	unsigned int n1;

	if (i < 0)
	{
		n1 = -i;
		_putchar('-');
	} else
	{
		n1 = i;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
