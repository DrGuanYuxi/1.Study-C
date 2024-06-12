# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg = 0;

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
		{
			sum += i;
			++cnt;
		}
	}

	avg = 1.0 * sum / cnt;

	printf("avg = %f\n", avg);

	return 0;
}