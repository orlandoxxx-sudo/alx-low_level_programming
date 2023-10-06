#include <stdio.h>

/**
 * main - Entry Point
 * Description: A code that prints all lowercase letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int asciiValue = 97;

	while (asciiValue <= 122)
	{
		putchar(asciiValue);
		asciiValue++;
	}
	putchar('\n');
	return (0);
}

