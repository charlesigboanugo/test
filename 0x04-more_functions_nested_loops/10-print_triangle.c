#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c: c is an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

void print_triangle(int size)
{
	int count, count2, count3;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{

			for (count2 = 1; count2 < size - count; count2++)
			{
				_putchar(32);
			}

			for (count3 = 0; count3 <= count; count3++)
			{
				_putchar('#');
			}

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
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
