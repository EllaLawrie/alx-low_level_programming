#include "main.h"
/**
 *_strlen_recursion - find the length of the string
 *
 *@s: pointer to string
 *Return: int with the length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		s++;
		n = _strlen_recursion(s);
		return (n + 1);
	}

	return (0);
}
