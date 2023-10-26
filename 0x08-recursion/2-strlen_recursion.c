#include "main.h"

/**
 * _strlen_recursion - recursion that returns string lenght
 * @s: this takes the value of the string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
