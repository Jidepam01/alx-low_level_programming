#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
