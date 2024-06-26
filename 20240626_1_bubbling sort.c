# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void sort(int * pArr, int len)
{
	int i, j, t;
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pArr[j] > pArr[j + 1])
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}
};

int main(void)
{
	int a[6] = { 10, 2, 8, -8, 11, 0 };
	int i = 0;

	sort(a, 6);

	for (i = 0; i < 6; ++i)
	{
		printf("%d ", a[i]);
	}

	return 0;  
}