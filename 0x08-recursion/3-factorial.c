#include "main.h"
/**
  *factorial - factorial operation
  *
  *@n: variable with the number and also it becomes the answer after passes the
  * if proccess
  *Return: n for answer, -1 for negative factorial and 1 for !0
  */
int factorial(int n)
{

	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
