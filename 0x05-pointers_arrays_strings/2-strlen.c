/**
 * _strlen - a function that returns the length of a string
 * @s: - pointer of a string length
 * Return: the length of a string
 */

int _strlen(char *s)
{
int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
