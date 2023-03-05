#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
			{
				putchar('0' + m / 10);
			}
			_putchar('0' + m % 10);
		}
		_putchar(10);
	}
}

int main(void)
{
	more_numbers();
	return (0);
}
