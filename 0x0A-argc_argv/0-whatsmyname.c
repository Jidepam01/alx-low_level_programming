#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that print its name
 * @argc: the number of arguments in command-line
 * @argv: array of strings of char in command-line
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
