#include <stdio.h>
#include <string.h>

/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */

int main(void)
{
	char alphabet_char = 97;

	while (alphabet_char < 123)
	{
		putchar(alphabet_char);
		alphabet_char++;
	}
	putchar('\n');

	return (0);
}
