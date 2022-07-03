#include "main.h"

/**
	* size_of - identifies lenth or size of a string
	* @s: string to find the length for
	*
	* Return: returns the length integer
	*/

int size_of(char *s)
{
	if (*s == '\0')
		return (0);
	return (size_of(s + 1) + 1);
}


/**
	* palindrome - checks if two characters are equal
	* @str: integer to check each character for
	* @i: index 0 incrementing to length of string
	* @size: size of the string decrementing to zero
	*
	* Return: returns 1 if characters are same 0 if not
	*/

int palindrome(char *str, int i, int size)
{
	if (i == size)
		return (1);
	if (i == size - 1)
		return (str[i] == str[size]);
	if (str[i] != str[size])
		return (0);
	return (palindrome(str, i + 1, size - 1));
}


/**
	* is_palindrome - checks if two a string is palindrome
	* @s: the string to be checked for if palindrome
	*
	* Return: returns 1 if string is palindrome and 0 if not
	*/

int is_palindrome(char *s)
{
	int size;

	size = size_of(s);
	if (size == 0 || *s != s[size - 1])
		return (0);
	return (palindrome(s, 0, size - 1));
}
