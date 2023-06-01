#include <ctype.h>

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string letter
 * Return: capitalized strings
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (capitalize_next && isalpha(*ptr))
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		else if (isspace(*ptr) || ispunct(*ptr))
		{
			capitalize_next = 1;
		}
		ptr++;
	}

	return (str);
}
