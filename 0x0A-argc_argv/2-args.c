#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints out all arguments it receives
 * @argc: the number of argumemts passed to the command-line
 * @argv: the array of strings for argumemts passed to CLI
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
