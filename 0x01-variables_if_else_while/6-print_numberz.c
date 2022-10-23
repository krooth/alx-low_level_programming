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
	int i = 0;

	for (i = 0; i < 10; ++i)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
