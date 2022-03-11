#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter, i, j;

	for (counter = 0; counter < 100; counter++)
	{

		i = (counter / 10) + '0';
		j = (counter % 10) + '0';

		if (i < j && i != j)
		{
			putchar(i);
			putchar(j);

			if (counter < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
