#include "main.h"
/**
  *swap_int - swap values from a to b and from b to a
  *
  *@a: variable to swap value with b
  *@b: variable to swap value with a
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
