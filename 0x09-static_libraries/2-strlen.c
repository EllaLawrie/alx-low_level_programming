#include "main.h"
/**
  *_strlen - string lenght
  *
  *@s: variable of the string
  *Return: the length of the variathe length of the variable valuee
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
