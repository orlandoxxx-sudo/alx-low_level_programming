#include "main.h"

/**
 * _sqrt_root - guesses the squaroot of an integer
 * @n: This is the integer
 * @root: the possible root of an integer
 *
 * Return: Squar Root of n, -n if not natural squareroot
 */
int _sqrt_root(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_root(n, root + 1));
	}
}
/**
 * _sqrt_recursion - outpus the squarrot of an integer
 * @n: this the integer to find it's root
 * Return: -1 if n less than 0 othewise the squaroot
 */
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
		return (_sqrt_root(n, 2));
	}
}
