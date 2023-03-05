#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	int y;

	if (n > 0)
	{
		y = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		y = -1;
		_putchar('-');
	}
	else
	{
		_putchar('0');
		y = 0;
	}
	return (y);
}

int main(void)
{
	int r;
	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
