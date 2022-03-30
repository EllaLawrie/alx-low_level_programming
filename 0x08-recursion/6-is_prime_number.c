/**
 *prime_check  - checker for prime numbers
 *
 *@n: value given by main function
 *@b: value created to go from the n number - 1
 * through 1
 *Return: 1 if is prime and 0 if it's not
 */
int prime_check(int n, int b)
{

	if (b == 1)
	{
		return (1);
	}

	if (n % b == 0)
	{
		return (0);
	}

	return (prime_check(n, b - 1));
}
/**
 *is_prime_number - function checking that n value is greater or equal to 1
 *
 *@n: value given in main
 *Return: recursion or 0 if it's less than 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_check(n, n - 1));
}
