#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s%d%s%d%s\n", "Last digit of ", n, " is ", n%10,
		"and is greater than 5");
	}
	if (n % 10 == 0)
	{
		printf("%s%d%s%d%s\n", "Last digit of ", n, " is ", n%10, 
				"and is 0");
	}
	if (n % 10 > 0 && n % 10 < 5) 
	{
		printf("%s%d%s%d%s\n", "Last digit of ", n, " is ", n%10,
				"and is 0");
	}
	return (0);
}
