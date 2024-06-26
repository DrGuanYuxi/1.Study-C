# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <malloc.h>

struct Student
{
	char name[100];
	int age;
	float score;
};

int main(void)
{
	int len;
	struct Student* pArr;//Define the adress of the first element of the dynamic memory space
	int i, j;
	struct Student t;

	printf("Please give the number of student:\n");
	printf("len = ");
	scanf("%d", &len);
	pArr = (struct Student*)malloc(len * sizeof(struct Student));

	for (i = 0; i < len; ++i)
	{
		printf("Please give the information of student %d:\n", i + 1);

		printf("name = ");
		scanf("%s", pArr[i].name);

		printf("age = ");
		scanf("%d", &pArr[i].age);

		printf("score = ");
		scanf("%f", &pArr[i].score);
	}

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pArr[j].score > pArr[j + 1].score)
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

	for (i = 0; i < len; ++i)
	{
		printf("\n");
		printf("The information of student %d is:\n", i + 1);

		printf("name = %s\n", pArr[i].name);
		printf("age = %d\n", pArr[i].age);
		printf("score = %f\n", pArr[i].score);
	}

	return 0;  
}