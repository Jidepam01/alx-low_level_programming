#include <stdio.h>

/**
 * main - Print all combo of all single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(i);
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
