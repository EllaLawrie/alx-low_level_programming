#include "main.h"
/**
 *_pow_recursion - value x to the power y
 *@x: base variable
 *@y: power
 *Return: the result of the value x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
