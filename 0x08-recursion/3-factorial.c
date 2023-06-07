/**
 * factorial - function that returns the factorial of a given number.
 * @n: input number
 * Return: factorial value of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
