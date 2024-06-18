# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdbool.h>

bool Is_Prime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (m % i == 0)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i;

	printf("Please give a number:\n");
	scanf("%d", &val);

	for (i = 2; i <= val; ++i)
	{
		if (Is_Prime(i))
			printf("%d\n", i);
	}

	return 0;
}