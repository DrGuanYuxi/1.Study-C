# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;
	int cnt = 0;

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
			cnt += 1;
	}

	printf("cnt = %d\n", cnt);

	return 0;
}