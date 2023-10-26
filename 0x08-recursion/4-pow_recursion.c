#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to pow y
 * @x: takes the base integer
 * @y: takes the power integer
 * Description: This calculates the power of an integer
 * Return: -1 if y is less than 0, 1 if y is 0 otherwise the output
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}			
