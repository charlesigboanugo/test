#include <stdio.h>

int main(void)
{
	int count;
	long int sum, last, sec_last;

	count = 3;
	last = 2;
	sec_last = 1;
	printf("1, 2, ");
	while (count <= 50)
	{
		sum = last + sec_last;
		printf("%ld", sum);
		sec_last = last;
		last = sum;
		if (count != 50)
		{
			printf(", ");
		}
		count++;;
	}

	printf("\n");
	return 0;
}
