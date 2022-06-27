#include "main.h"

/**
	* *rot13 - rotate a character by 13 for alphabets
	* @str: char parameter
	*
	* Return: returns character which is rotated by 13
	*/

void print_number(int n)
{
    int num;

    while (n != 0)
    {
        num = n % 10;
        n /= 10;
        _putchar(num);
    }
    _putchar('\n');
}