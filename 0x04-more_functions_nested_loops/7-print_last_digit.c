#include <stdio.h>
#include "main.h"

int print_last_digit(int c)
{
	int y;
	if (c < 0)
	{
		y = -1 * c % 10;
	}
	else
	{
		y = c % 10;
	}
	
	_putchar('0'+ y);
	return (y);
}

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(799);
	print_last_digit(5);
	print_last_digit(-782);
	print_last_digit(66);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
