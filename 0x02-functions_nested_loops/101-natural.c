#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded),
 * that are multiples of 3 or 5.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int limit = 1024;
	int total_sum = 0;
	int num;

	for (num = 0; num < limit; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total_sum += num;
		}
	}

	printf("%d\n", total_sum);

	return (0);
}
