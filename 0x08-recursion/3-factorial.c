#include "main.h"

/**
 * factorial - this prints out the factorial of any integer
 * @n: this takes the number for factorial calculatino
 * Description: this program returns the factorial of any number
 * Return: -1 if n is less than 0, 1 if n is equal to 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
