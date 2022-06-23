#include "main.h"

/**
	* _puts_recursion - prints characters
	* @s: character to be printed
	*
	* Return: returns nothing
	*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}
