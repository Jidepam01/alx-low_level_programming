/**
 * string_toupper - a function that changes all lowercase to uppercase letters
 * @str: pointer var
 * Return: pointer to uppercase
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'A')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
