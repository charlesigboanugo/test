#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - A function that prints 10 times the alphabet in
* lowercase followed by a new line
* description - prints the alphabet in lowercase followed by a new line
* Return: void
*/

void print_alphabet_x10(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 97;
		while (y < 123)
		{
			_putchar(y);
			y++;
		}
	_putchar(10);
	x++;
	}
}

/**
* main - prints 10 times the alphabet, in lowercase, followed by a
* new line.
* description - calls a function that prints 10 times the alphabet in
* lowercase followed by a new line.
* Return: 0 indicates success
*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}
