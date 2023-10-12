#include "main.h"

/**
 * print_line - This function prints a line on the terminal
 * @n: number of times to print the underscore
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
