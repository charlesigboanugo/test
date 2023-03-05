#include <stdio.h>
#include "main.h"

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar(10);
}

int main(void)
{
	print_most_numbers();
	return (0);
}
