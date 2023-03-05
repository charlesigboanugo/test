#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int w, x, y, z;

	w = 48;
	while (w < 51)
	{
		x = 48;
		while (x < 58)
		{
			if (w == 50 && x == 52)
				break;
			y = 48;
			while (y < 54)
			{
				z = 48;
				while (z < 58)
				{
					_putchar(w);
					_putchar(x);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
					z++;
				}
				y++;
			}
			x++;
		}
		w++;
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
