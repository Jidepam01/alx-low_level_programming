/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes to be used by source
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
