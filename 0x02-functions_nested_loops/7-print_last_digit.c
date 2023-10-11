#include "main.h"

/**
 * print_last_digit - this functions prints the last digit of any number
 * @n: is use to hold the last digit
 * Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit = -lastdigit;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
