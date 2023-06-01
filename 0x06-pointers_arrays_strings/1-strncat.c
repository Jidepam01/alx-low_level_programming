/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes used from source
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*dest != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
