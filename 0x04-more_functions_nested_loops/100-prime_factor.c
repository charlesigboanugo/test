#include <stdio.h>

int main(void)
{
	long int num, max_num;

	max_num = 612852475143;
	num = 2;
	while (num <= max_num)
	{
		if (max_num % num == 0)
		{
			max_num = max_num / num;
		}
		else
		{
			num++;
		}
	}
	printf("%ld\n", num);
	return (0);
}

