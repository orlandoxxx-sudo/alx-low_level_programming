#include <stdio.h>
#include <stdlib.h>

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
