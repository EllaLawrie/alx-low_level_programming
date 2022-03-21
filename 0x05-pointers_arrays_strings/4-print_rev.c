#include "main.h"
/**
  *print_rev - print string in reverse
  *
  *@s: pointer to a variable with the string
  *Return: void
  */
void print_rev(char *s)
{
	int counter, n;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}

	n = counter - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
