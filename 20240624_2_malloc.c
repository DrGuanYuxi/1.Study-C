# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int len;
	int* pArr;
	int i;

	printf("Please give the number of you want to save: ");
	scanf("%d", &len);

	pArr = (int*)malloc(4 * len);

	printf("Start to give number:\n");
	for (i = 0; i < len; ++i)
		scanf("%d", &pArr[i]);

	printf("The array is:\n");
	for (i = 0; i < len; ++i)
		printf("%d ", pArr[i]);

	return 0;  
}