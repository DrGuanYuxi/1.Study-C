# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

enum weekday
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

void f(enum weekday i)
{
	switch (i)
	{
	case 0:
		printf("Monday\n");
		break;
	case 1:
		printf("Tuesday\n");
		break;
	case 2:
		printf("Wednesday\n");
		break;
	case 3:
		printf("Thursday\n");
		break;
	case 4:
		printf("Friday\n");
		break;
	case 5:
		printf("Saturday\n");
		break;
	case 6:
		printf("Sunday\n");
		break;
	}
}

int main(void)
{
	f(Friday);

	return 0;  
}