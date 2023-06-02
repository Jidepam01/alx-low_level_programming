/**
 * string_toupper - a function that changes all lowercase to uppercase letters
 * @str: string letters
 * Return: pointer to uppercase
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
