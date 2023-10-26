#include "main.h"

/**_prime_recursive - this is the main prime number recursive checker
 * @n: this is the integer that is being checked
 * @divider: the dividing integer checker
 * Description: this checks the prime recursion
 * Return: 0 if n is less than 2, 1 if divider is equal to 1
 */
int _prime_recursive(int n, int divider)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divider == 1)
	{
		return (1);
	}
	else if (n % divider == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_recursive(n, divider - 1));
	}
}

/**
 * is_prime_number - this is the prime number output
 * @n: the integer to be used
 * Return: the value of 0 or 1 if it is prime number
 */
int is_prime_number(int n)
{
	return (_prime_recursive(n, n - 1));
}
