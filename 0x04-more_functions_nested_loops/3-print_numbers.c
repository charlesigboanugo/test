#include <stdio.h>
#include "main.h"

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}

int main(void)
{
	print_numbers();
	return (0);
}
