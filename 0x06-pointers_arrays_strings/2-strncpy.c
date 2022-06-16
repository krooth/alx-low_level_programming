#include "main.h"

/**
	* *_strncpy - concatnates strings
	* @dest: char parameter
	* @src: char parameter
	* @n: int parameter
	*
	* Return: returns pointer
	*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
