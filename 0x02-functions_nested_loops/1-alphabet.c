#include "main.h"

/**
		* print_alphabet - function
		* void - no parameter for print_alphabet
		*
		* Return: returns 0 when program finishes excution
		*/
void print_alphabet(void)
{
	char letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
