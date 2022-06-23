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
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
