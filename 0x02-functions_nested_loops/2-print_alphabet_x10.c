#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times in a row
*/
void print_alphabet_x10(void)
{
	
	int i = 0, j;
	while (i<10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
