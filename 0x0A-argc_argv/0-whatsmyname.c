#include <stdio.h>
#include <stdlib.h>

/**
 * main - this invokes the main library
 * Description: This programs prints it's own name
 * Return: 0 Always Success
 */
int main (int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("program name not available");
	}
	return (0);
}
