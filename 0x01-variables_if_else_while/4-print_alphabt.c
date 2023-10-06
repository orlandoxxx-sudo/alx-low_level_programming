#include <stdio.h>

/**
 * main - Entry point
 * Descrioption: a code that prints out all alphabet with a few extensions
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
