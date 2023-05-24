#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci number, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0 (success)
 */

int main(void) 
{
int count = 50;
int fibonacci[count];
int i;
fibonacci[0] = 1;
fibonacci[1] = 2; 
	for (i = 2; i < count; i++) {
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (i = 0; i < count - 1; i++) {
	printf("%d, ", fibonacci[i]);
	}
	printf("%d\n", fibonacci[count - 1]);

	return (0);
}
