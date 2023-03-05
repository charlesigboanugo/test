#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c: c is an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
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

	r = _isupper('j');
	_putchar(r + '0');
	r = _isupper(78);
	_putchar(r + '0');
	r = _isupper('A');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
