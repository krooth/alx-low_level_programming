#include "main.h"

/**
	* *_strncat - concatnates strings
	* @dest: char parameter
	* @src: char parameter
	* @n: int parameter
	*
	* Return: returns pointer
	*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
