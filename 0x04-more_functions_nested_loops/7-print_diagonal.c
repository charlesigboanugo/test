#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c: c is an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

void print_diagonal(int n)
{
	int count, count2;

	if (n > 0)
	{

		for (count = 0; count < n; count++)
		{
			for (count2 = 0; count2 < count; count2++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

/**
* main - calls a function that checks for lowercase character.
* Return: Always 0.
*/

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
