#include "main.h"

/**
	* _memcpy - copies character form source to destination
	* @dest: destiantion to copy chartacter to
	* @src: source to copy character from
	* @n: size of mem to copy on to
	*
	* Return: returns character
	*/

char *_memcpy(char *dest,  char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
