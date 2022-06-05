#include <stdio.h>

/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}

