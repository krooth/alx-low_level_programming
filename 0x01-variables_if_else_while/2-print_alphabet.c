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
	putchar('\n\0');
	return (0);
}
