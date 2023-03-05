#include <stdio.h>
#include "main.h"

/**
* print_alphabet - A function that prints the alphabet in lowercase followed
* by a new line
* description - prints the alphabet in lowercase followed by a new line
* Return: void
*/

void print_alphabet(void)
{
	int x = 97;

	while (x < 123)
	{
		_putchar(x);
		x++;
	}

	_putchar(10);
}

/**
* main - prints the alphabet, in lowercase, followed by a
* new line.
* description - calls a function that prints the alphabet in lowercase
* followed by a new line.
* Return: 0 indicates success
*/

int main(void)
{
	print_alphabet();
	return (0);
}
