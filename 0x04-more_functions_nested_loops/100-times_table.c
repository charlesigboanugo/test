#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int x, y, z, a, b, c;

	if (n >=0 && n <= 15)
	{
		x = 0;
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				z = x * y;
				a = z / 10;
				b = z % 10;
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					if (z >= 10)
					{
						if ( z >= 100)
						{
							b = z % 10;
							a = (z / 10) % 10;
							c = z / 100;
							_putchar('0' + c);
						}
						else
						{
							_putchar(32);
						}
						_putchar('0' + a);
					}
					else
					{
						_putchar(32);
						_putchar(32);	
					}
				}
				_putchar('0' + b);
				y++;
			}
			_putchar ('\n');
			x++;
		}
	}
}

int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	_putchar('\n');
	print_times_table(17);
	_putchar('\n');
	print_times_table(14);
	_putchar('\n');
	return (0);
	return (0);
	return (0);
}
