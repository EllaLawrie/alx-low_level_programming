#include <stdio.h>
#include "main.h"
/**
  *print_array - print array in order followd by a comma and space
  *
  *@a: pointer to n
  *@n: array numbers
  *Return: void
  */
void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter != n - 1)
		{
		printf("%d, ", a[counter]);
		}
		else
		{
			printf("%d", a[counter]);
		}
		counter++;
	}
	printf("\n");
}
