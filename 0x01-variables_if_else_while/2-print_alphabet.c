#include <stdio.h>

/**
 * main - Entry Point
 * Descrioption: A code that prints all lowercase letters
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

