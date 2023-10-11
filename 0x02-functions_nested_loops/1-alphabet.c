#include "main.h"

/**
 * Description - prints alphabet from a to z
*/
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
