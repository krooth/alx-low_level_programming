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
	char i;

	for (i = 48; i < 58; ++i)
	{
		putchar(i);
	}
	for (i = 97; i < 103; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
