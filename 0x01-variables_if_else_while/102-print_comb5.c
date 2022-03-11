#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter, counter2, i, j, k, l;

	for (counter = 0; counter < 100; counter++)
	{
		for (counter2 = 0; counter2 < 100; counter2++)
		{
			if (counter < counter2)
			{
				i = (counter / 10) + '0';
				j = (counter % 10) + '0';
				k = (counter2 / 10) + '0';
				l = (counter2 % 10) + '0';
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);

				if (!(counter == 98 && counter2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
