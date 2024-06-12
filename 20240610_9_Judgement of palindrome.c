# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int val;
	int m;
	int sum = 0;

	printf("Please give a number.\n");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}

	if (sum == val)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}