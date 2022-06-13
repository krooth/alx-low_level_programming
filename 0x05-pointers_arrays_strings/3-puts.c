#include "main.h"

/**
	* _puts - prints characters to stdout
	* @str: character pointer parameter
	*
	* Return: returns nothing
	*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n')
}
