/**
 * swap_int - a functions that swaps the value of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
