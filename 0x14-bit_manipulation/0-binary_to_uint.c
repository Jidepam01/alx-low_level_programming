#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i	--;
	for (place = 1, uint = 0; i >= 0; --)
	{
		if (b[i] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
