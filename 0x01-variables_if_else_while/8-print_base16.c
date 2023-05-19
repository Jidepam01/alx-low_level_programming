#include <stdio.h>

/**
 * main - Print all base 16 numbers in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(i);
	}
	for (i = 3; i < 9; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
