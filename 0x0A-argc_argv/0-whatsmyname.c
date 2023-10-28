#include <stdio.h>

/**
 * main - this invokes the main library
 * Description: This programs prints it's own name
 * @argc: counts the comand line arguments
 * @argv: array of the set of arguments
 * Return: 0 Always Success
 */
int main(int argc, char *argv[])
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
