#include "main.h"

/**
 * _islower - checks for lowercase characters and return 1 or 0 otherwise
 * @c: the Character check
 * Return: 1 if c is lower case, otherwise Return: 0
*/
int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
