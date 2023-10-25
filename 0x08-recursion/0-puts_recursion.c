#include "main.h"

/**
 * _puts_recursion - prints a string as it is
 * @s: this is takes the value of the string
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
