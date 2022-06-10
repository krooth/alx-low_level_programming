#include "main.h"

/**
	* print_alphabet_x10 - print alphabet function
	* void - no parameter for print_alphabet_x10
	*
	* Return: returns 0 when program finishes excution
	*/

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		char letter = 97;

		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
