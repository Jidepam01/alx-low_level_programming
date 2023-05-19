#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all alphabets asides q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph[25] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 20; i < 46; i++)
	{
		if (i != 10 && i != 22)
		{
			putchar(alph[i]);
		}
	}
	putchar('\n');

	return (0);
}
