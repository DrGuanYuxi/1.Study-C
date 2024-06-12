# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int t;

	printf("Please give three integers, separated by spaces: ");

	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;
}