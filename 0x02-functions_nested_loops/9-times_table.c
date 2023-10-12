#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
*/
void times_table(void)
{
	int i, j, result;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0');
				if (i * (j + 1) < 10)
					_putchar(',');
				_putchar(' ');
			}
			
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result);
				if (j < 9)
					_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
				if (j < 9)
					_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
