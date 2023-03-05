#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

int _isalpha(int c)
{
	int y;

	if (c > 96 && c < 123 || c > 64 && c < 91)
	{
		y = 1;
	}
	else
	{
		y = 0;
	}

	return (y);
}

/**
* main - calls a function that checks for lowercase character.
* Return: Always 0.
*/

int main(void)
{
	int r;

	r = _isalpha('j');
	_putchar(r + '0');
	r = _isalpha(78);
	_putchar(r + '0');
	r = _isalpha('A');
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
