# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 12; ++i)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}

	printf("sum = %d\n", sum);

	return 0;
}