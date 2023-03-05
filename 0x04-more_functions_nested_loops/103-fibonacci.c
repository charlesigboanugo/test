#include <stdio.h>

int main(void)
{
	long int total_sum, sum, last, sec_last;
	
	sum = 0;
	total_sum = 0;
	last = 1;
	sec_last = 0;

	while (sum < 4000000)
	{	
		sum = sec_last + last;
		sec_last = last;
		last = sum;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
	}

	printf("%ld\n", total_sum);
	return 0;
}
