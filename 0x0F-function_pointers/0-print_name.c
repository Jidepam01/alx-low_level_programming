#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: the name to be printed
 * @f: a pointer to a function that accepts a string
 * as a parameter and returns nothing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}

