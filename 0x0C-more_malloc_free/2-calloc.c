#include<stdlib.h>

/**
 * _calloc - a function that allocates memory for an array with malloc
 * @nmemb: number of bytes.
 * @size: size of bytes.
 *
 * Return: returns pointer to the allocated memory
 * (NULL) if nmemb or size is 0, and if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
