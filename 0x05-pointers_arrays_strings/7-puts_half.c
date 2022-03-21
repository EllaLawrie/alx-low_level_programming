#include "main.h"
/**
  *puts_half - puts half of the string
  *
  *@str: string variable
  *Return: void
  */
void puts_half(char *str)
{
	int length = 0;
	char *str1 = str;

	while (*str)
	{
		length++;
		str++;
	}

	length += 1;
	str1 += length / 2;

	while (*str1)
	{
		_putchar(*(str1));
		str1++;
	}
	_putchar('\n');
}
