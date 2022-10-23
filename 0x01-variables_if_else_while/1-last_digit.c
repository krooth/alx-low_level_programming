#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - entry point
  * void - doesn't take any parameter
  *
  * Return: returns 0 when the program finished excuting
  */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit < 6)
	{
		printf("%s%d%s%d%s%d%s\n", "Last digit of ", n, " is ", last_digit,
			" and ",last_digit, " is less than 6 and not 0");
	}
	else if (last_digit > 5)
	{
		printf("%s%d%s%d%s%d%s\n", "Last digit of ", n, " is ", last_digit,
			" and ",last_digit, " is greater than 5");
	}
	else if (last_digit == 0)
	{
		printf("%s%d%s%d%s\n", "Last digit of ", n, "is ", last_digit,
			" and is 0");
	}
	return (0);
}
