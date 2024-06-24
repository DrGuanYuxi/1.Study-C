# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void f(int * pArr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(pArr + i));
	}
	printf("\n");
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int b[10] = { -1,-2,-3,-4,-5 };

	f(a,5);
	f(b,10);

	return 0;
}