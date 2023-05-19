#include <stdio.h>

/**
 * main - Print all possible combo for two-digits numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 11; i <= 19; i++)
	{
		for (j = 22; j <= 30; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 19 || j != 30)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
