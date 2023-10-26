#include "main.h"

/**
 * _sqrt_recursion - calculates the squar root of any number
 * @n: This the number we need to check for the squaroot 
 * @guess: possible number guessed by the system
 * _sqrt_helper - helps to check for the possible squareroot
 * Return: -1 if n does not have natural squarroot
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return _sqrt_helper(n, 2);
	}
}
