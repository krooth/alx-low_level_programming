#include "stdio.h"

/**
	* _prime_num - identifies prime numbers
	* @n: integer arguement to be checked if prime or not
	* @i: ineteger paramenter used for checking
	*
	* Return: returns integer
	*/

int _prime_num(int n, int i)
{
	if (n <= 0 || n == 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime_num(n, i - 1));
}

/**
	* _is_prime_number - identifies prime numbers
	* @n: integer arguement to be checked if prime or not
	*
	* Return: returns integer
	*/

int is_prime_number(int n)
{
	int i = n / 2;

	return (_prime_num(n, i));
}
