#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
   * main - entry point
   * void - no parameter for main
   *
   * return: returns 0 when program finishes excution
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d %s", n, "is positive");
	}
	else if (n < 0)
	{
		printf("%d %s", n, "is negative");
	}
	else
	{
		printf("%d %s", n, "is zero");
	}
	return (0);
}
