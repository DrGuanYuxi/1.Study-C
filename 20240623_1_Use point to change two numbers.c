# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void Change(int * p, int *	q)
{
	int * t;
	t = *p;
	*p = *q;
	*q = t;

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	
	Change(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}