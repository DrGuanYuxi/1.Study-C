# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st1 = {80, 66.6f, 'F'};
	struct Student st2;
	st2.age = 10;
	st2.score = 66.6f;
	st2.sex = 'F';
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);

	struct Student* pst = &st2;
	printf("%d %f %c\n", pst->age, pst->score, pst->sex);
	//pst->age will translate to (*pst).age in the computer
	
	return 0;  
}
