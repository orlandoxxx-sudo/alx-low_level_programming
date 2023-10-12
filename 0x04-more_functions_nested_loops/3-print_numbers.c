#include "main.h"

/**
 * print_numbers - prints the numbers from 0 through 9
 * Description: This function prints all numbers from 0 to 9
 * Return: Always 0 (success)
*/

void print_numbers(void)
{
	int i;

	i = 0;
	while (i >= 0 && i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
	return (0);
}	
