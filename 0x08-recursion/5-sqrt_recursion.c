#include "main.h"
/**
 *comparison - function where the comparison is being done
 *
 *@n: value that they give us to get the arithmetic
 *@i: value that we will find doing the multiplication
 *Return: recursion and increasing of variable i
 */
int comparison(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	if (n < (i * i))
	{
		return (-1);
	}
	return (comparison(n, i + 1));
}
/**
 *_sqrt_recursion - is the function of the square root
 *
 *@n: value that they give us to get the root
 *Return: the result of the recursion in tmp function
 */
int _sqrt_recursion(int n)
{
	return (comparison(n, 1));
}
