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
	char i = 97;

	for (i = 97; i < 123; ++i)
	{
		putchar(i);
	}
	for (i = 65; i < 91; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
