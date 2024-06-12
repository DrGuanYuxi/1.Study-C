# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int t;

	t = i;
	i = j;
	j = t;

	printf("i = %d, j = %d\n", i, j);

	return 0;
}