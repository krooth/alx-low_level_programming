#include "main.h"

/**
	* print_rev - prints in reverse
	* @s: character parameter
	*
	* Return: returns nothing
	*/

void print_rev(char *s)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
