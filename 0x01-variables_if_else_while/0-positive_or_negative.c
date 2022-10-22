#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - entry point
  * void - doesn't take any parameter
  *
  * Return: returns 0 when the program finished excuting
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d%s\n", n, " is negative");
	}
	else if (n > 0)
	{
		printf("%d%s\n", n, " is positive");
	}
	else {
		printf("%d%s\n", n, " is zero");
	}
	return (0);
}
