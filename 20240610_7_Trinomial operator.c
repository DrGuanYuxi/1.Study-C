# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int i;

	i = (0 > 2 ? 5 : 1);

	printf("i = %d\n", i);

	return 0;
}