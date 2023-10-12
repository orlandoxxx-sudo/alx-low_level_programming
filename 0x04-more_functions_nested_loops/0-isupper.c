#include "main.h"

/**
 * _isupper - prints out only uppercase letter
 * @c: takes value of character
 * Return: 0 if it's not uppercase
 * Return: 1 if it's upper case
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
