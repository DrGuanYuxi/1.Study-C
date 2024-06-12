# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;
	int j = 2;

	i = (j++, ++j, j + 2, j - 3);

	printf("i = %d\n", i);

	return 0;
}