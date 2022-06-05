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
	char alphabet_char;

	for (int i = 97; i < 123; i++)
	{
		alphabet_char = i;
		putchar(alphabet_char);
	}

	return (0);
}
