#include <stdio.h>


/**
 * main - Print all possible diff combo for three-digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 10; i < 20; i++)
	{
		for (j = 11; j < 20; j++)
		{
			for (k = 12; k < 20; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 17 || j != 18)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
