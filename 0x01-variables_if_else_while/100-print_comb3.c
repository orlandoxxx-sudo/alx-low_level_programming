#include <stdio.h>

/**
 * main - This program prints the numbers from 00 to 99.
 * Numbers are separated by a comma and a space, are printed
 * in ascending order, and putchar is used to print to screen.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}