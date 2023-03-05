#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int x, y, z, a, b;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			a = z / 10;
			b = z % 10;
			if (y != 0)
			{
				_putchar(44);
				_putchar(32);
				if (z < 10)
				{
					_putchar(32);
				}
				else
				{	
					_putchar('0' + a);
				}

			}
			_putchar('0' + b);
			y++;
		}
		_putchar ('\n');
		x++;
	}
}

int main(void)
{
	times_table();
	return (0);
}
