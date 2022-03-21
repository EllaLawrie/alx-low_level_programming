#include "main.h"
/**
  *rev_string - print a string forward and backwards
  *
  *@s: pointer of the variable with string value on it. Type char
  *Return: void
  */
void rev_string(char *s)
{
	int counter, lower;
	int aux;

	counter = 0;
	while (s[counter])
	{
		counter++;
	}

	lower = 0;
	while (lower < counter)
	{
		aux = s[lower];
		s[lower] = s[counter - 1];
		s[counter - 1] = aux;
		lower++;
		counter--;
	}
}
