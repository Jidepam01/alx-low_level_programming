/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be filled with
 * Return: the pointer to dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
