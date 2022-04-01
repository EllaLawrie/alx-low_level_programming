#include "main.h"
/**
  *_puts - prints a string
  *
  *@str: variable that has the address of the string
  *Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
