# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int val;

	printf("Please give the stage you want go.\n");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("First stage open.\n");
		break;
	case 2:
		printf("Second stage open.\n");
		break;
	case 3:
		printf("Third stage open.\n");
		break;
	default:
		printf("There is not this stage .\n");
		break;
	}

	return 0;
}