#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c: c is an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

/**
* main - calls a function that checks for lowercase character.
* Return: Always 0.
*/

int main(void)
{
	int r;

	r = _isdigit('j');
	_putchar(r + '0');
	r = _isdigit(48);
	_putchar(r + '0');
	r = _isdigit('A');
	_putchar(r + '0');
	r = _isdigit('8');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
