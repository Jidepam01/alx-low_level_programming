#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints number of arguments passed into it
 * @argc: numbers of arguments passed to command-line
 * @argv: arrays of strings of char for arguments passed
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
