#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
