#include <stdio.h>

int main(void)
{
	int x, sum;


	x = 3;
	sum = 0;
	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
		x++;
	}
	printf("%d\n", sum);

	return 0;
}
