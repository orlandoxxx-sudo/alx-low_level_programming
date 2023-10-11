#include "main.h"

/**
 * Description - prints alphabet from a to z
 * print_alphabet - prints the alphabet in lowercase.
*/
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		/* Function Implementation */
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
