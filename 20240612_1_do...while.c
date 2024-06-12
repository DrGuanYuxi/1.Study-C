# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

int main(void)
{
	double a, b, c;
	double delta;
	double x1, x2;
	char ch;
	
	do
	{
		printf("Please give three coefficient of the equation of two degree.\n");

		printf("a = ");
		scanf("%lf", &a);

		printf("b = ");
		scanf("%lf", &b);

		printf("c = ");
		scanf("%lf", &c);

		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			printf("There two solutions, x1 = %f, x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 =  (-b) / (2 * a);
			printf("There one solution, x1 = %lf\n", x1);
		}
		else
		{
			printf("There no solution.\n");
		}

		printf("Do you want to continue?(Y/N)\n");
		scanf(" %c", &ch); //There is a space before '%c', no reason.

	} while ('y' == ch || 'Y' == ch);

	return 0;
}
