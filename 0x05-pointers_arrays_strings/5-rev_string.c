#include "main.h"

/**
	* rev_string - reverse a sting
	* @s: character parameter
	*
	* Return: returns nothing
	*/

void rev_string(char *s)
{
	char *temp = *s;
	int i, j, k = 0, counter = 0;

	for (i = 0; temp != '\0'; i++)
	{
		counter++;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		s[k] = temp[j];
		k++;
	}
}
