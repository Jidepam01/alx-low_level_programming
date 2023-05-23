#include "main.h"

/**
 * print_alphabet - prints all alphabet in lowercase
 */

void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab)
	{
		_putchar(alphab);
	}
	_putchar('\n');
}
