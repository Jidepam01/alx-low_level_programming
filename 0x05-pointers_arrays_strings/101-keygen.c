#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, s = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (s < 2772)
	{
		r = rand() % 128;
		if ((s + r) > 2772)
			break;
		s = s + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - s));
	return (0);
}
