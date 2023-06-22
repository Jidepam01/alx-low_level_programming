#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an array
 * @array: the array to be operated on
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which cmp is successsful
 * and -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int search = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		search = cmp(array[i]);
		if (search != 0)
			return (i);
	}

	return (-1);
}
