#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to the memory area to be filled
 * @b: constant byte to fill the memory with
 * @n: numbers of bytes to be filled
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
