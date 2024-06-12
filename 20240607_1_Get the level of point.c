# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    float score;

    printf("Please give your score: ");

    scanf("%f", &score);

    if (score > 100)
        printf("This is wrong.\n");
    else if (score < 0)
        printf("This is wrong.\n");
    else if (90 <= score && score <= 100)
        printf("The level is A.\n");
    else if (80 <= score && score < 90)
        printf("The level is B.\n");
    else if (70 <= score && score < 80)
        printf("The level is C.\n");
    else if (60 <= score && score < 70)
        printf("The level is D.\n");
    else
        printf("You failed.\n");

    return 0;
}