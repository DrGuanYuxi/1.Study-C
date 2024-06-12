# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
			sum += i;
	}

	printf("sum = %d\n", sum);

	return 0;
}