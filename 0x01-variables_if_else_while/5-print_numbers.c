#include <stdio.h>
/**
 * Main - Entry point
 * Description: this code prints out number from 0 to 10
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
