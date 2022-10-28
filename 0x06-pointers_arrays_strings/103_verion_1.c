#include "main.h"

/**
	* digit_of_str - returns size of a give string
	* @str: sting argument to find the size on
	*
	* Return: returns integer
	*/

int *digit_of_str(char *str)
{
	int i, *digit_str = 0;
	for (i = 0; str[i] != '\0'; i++)
		digit_str++;
	return (digit_str);
}
/**
	* largest_size_ident - returns the str with longest and shortest length
	* @digit_str_one:  digit of string one
	* @digit_str_two:  digit of string two
	* @smallest_size:  pointer to return the smallest str in size
	* @str_one: string one
	* @str_two: string two
	* @largest_str: pointer to return the largest string in char
	* @smallest_str: pointer to return the smallest string in char
	*
	* Return: returns integer
	*/

int *largest_size_idnt(int *digit_str_one, int *digit_str_two,
 char *str_one, char *str_two, char *largest_str)
{
	int *largest_digit;
	if (digit_str_one >= digit_str_two)
	{
		largest_digit = digit_str_one;
		largest_str = str_one;
	}
	else
	{
		largest_digit = digit_str_two;
		largest_str = str_one;
	}
	return (largest_digit);
}

/**
	* largest_size_ident - returns the str with longest and shortest length
	* @digit_str_one:  digit of string one
	* @digit_str_two:  digit of string two
	* @smallest_size:  pointer to return the smallest str in size
	* @str_one: string one
	* @str_two: string two
	* @largest_str: pointer to return the largest string in char
	* @smallest_str: pointer to return the smallest string in char
	*
	* Return: returns integer
	*/
int *smallesst_size_idnt(int *digit_str_one, int *digit_str_two, int *smallest_size,
 char *str_one, char *str_two, char *smallest_str)
{
	int *smallest_digit;
	if (digit_str_one = digit_str_two)
	{
		smallest_digit = digit_str_one;
		smallest_str = str_one;
	}
	else
	{
		smallest_size = digit_str_two;
		smallest_str = str_two;
	}
	smallest_size = smallest_digit;
	return (smallest_digit);
}

/**
	* infinite_add - returns sum of two character strings as string
	* @n1: first character to add
	* @n2: second character to add
	* @r: character to write the sum of the two characters
	* @size_r: size of the sum @r(sum) character
	*
	* Return: returns char
	*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, digit_n1 = 0, digit_n2 = 0, largest_size, smallest_size, sum,
	remainder = 0;
	char *largest_str, *smallest_str;

	digit_n1 = digit_of_str(n1);
	digit_n2++ =  digit_of_str(n2);
	largest_size = largest_size(digit_n1, digit_n2, smallest_size, n1, n2, largest_str, smallest_str);
	if (size_r < (largest_size + 2))
		return (0);
	j = smallest_size - 1;
	for(i = 0; i < size_r; i++)
		r[i] = '\0';

	for(i = largest_size - 1; i >= 0; i--   )
	{
		if (j >= 0)
			sum = (largest_str[i] - '0') + (smallest_str[j] - '0') + remainder;
		else
			sum = (largest_str[i] - '0') + remainder;
		if (sum >= 10)
			remainder = sum / 10;
		else
			remainder = 0;
		r[i + 1] = (sum % 10) + '0';
		if (i == 0)
			r[i] = remainder + '0';
		j--;
	}
	do
	{
		if (r[0] == '\0' || r[0] == '0')
		{
			for(i = 0; i < size_r; i++)
				r[i] = r[i + 1];
		}
	} while (r[0] == '\0' || r[0] == '0');
	return (r);
}