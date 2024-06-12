# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int n, i;
	int f1 = 1;
	int f2 = 1;
	int f3;

	printf("Please give number: \n");
	scanf("%d", &n);

	if (n <= 2)
	{
		f3 = 1;
	}
	else
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}

	printf("%d\n", f3);

	return 0;
}