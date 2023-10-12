#include <stdio.h>

/**
 * main - entry point
 * Description: this program adds multiples
 * of 3 and 5 in 1023
 * Return: Always 0 (success)
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
