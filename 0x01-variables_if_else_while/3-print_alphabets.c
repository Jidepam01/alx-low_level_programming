#include <stdio.h>


/**
 * main - Prints alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');

	return (0);
}
