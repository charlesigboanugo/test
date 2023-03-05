#include <stdio.h>
#include "main.h"

int mul(int a, int b)
{
	return (a * b);
}

int main(void)
{
	int n;

	n = mul(106, 13);
	printf("%d\n", n);
	return (0);
}
