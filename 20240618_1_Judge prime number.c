# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdbool.h>

bool Is_Prime(int val)
{
	int i;
	for (i = 2; i < val; ++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int m;

	printf("Please give a number:\n");
	scanf("%d", &m);

	if (Is_Prime(m))
		printf("Yes.\n");
	else
		printf("No.\n");

	return 0;
}