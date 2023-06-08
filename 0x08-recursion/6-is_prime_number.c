/**
 * is_prime_number - detects if an input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number, 0 if n is not
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}


	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
