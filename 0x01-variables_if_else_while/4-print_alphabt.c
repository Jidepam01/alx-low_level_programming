#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all alphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');

	return (0);
}
