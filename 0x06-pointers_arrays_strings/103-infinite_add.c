#include "main.h"

/**
	* infinite_add - adds a very long strings of numbers together
	* @n1: numeric string1 to add with another string
	* @n2: numeric string2 to add with the pervious string
	* @r: is variable for the sum of the two strings
	* @size_r: is the max size of char that @r vairable can hold
	*
	* Return: returns sum char strings of two strings
	*/




char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, digit_n1 = 0, digit_n2 = 0, largest_size, smallest_size, sum,
	remainder = 0;
	char *largest_str, *smallest_str;

	for (i = 0; n1[i] != '\0'; i++)
		digit_n1++;
	for (i = 0; n2[i] != '\0'; i++)
		digit_n2++;
	largest_size = digit_n1 >= digit_n2 ? digit_n1 : digit_n2;
	largest_str = digit_n1 >= digit_n2 ? n1 : n2;
	smallest_size = digit_n1 >= digit_n2 ? digit_n2 : digit_n1;
	smallest_str = digit_n1 >= digit_n2 ? n2 : n1;
	if (size_r < (largest_size + 2))
		return (0);
	j = smallest_size - 1;
	for (i = 0; i < size_r; i++)
		r[i] = '\0';
	for (i = largest_size - 1; i >= 0; i--)
	{
		sum = j >= 0 ? (largest_str[i] - '0') + (smallest_str[j] - '0') + remainder :
		(largest_str[i] - '0') + remainder;
		remainder = sum >= 10 ? sum / 10 : 0;
		r[i + 1] = (sum % 10) + '0';
		if (i == 0)
			r[i] = remainder + '0';
		j--;
	}
	do {
		if (r[0] == '\0' || r[0] == '0')
		{
			for (i = 0; i < size_r; i++)
				r[i] = r[i + 1];
		}
	} while (r[0] == '\0' || r[0] == '0');
	return (r);
}
