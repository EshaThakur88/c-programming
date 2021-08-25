#include <stdio.h>

int main()
{
    int total, physics, maths, chemistry;

    printf("Enter your physics marks\n");
    scanf("%d", &physics);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);

    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);

    total = (physics + maths + chemistry)/3;

    if ((total >= 40) && maths >= 33 && physics >= 33 && chemistry >= 33)
    {
        printf("Your total is %d and you are passed in the examination\n", total);
    }
    else
    {
        printf("Your total is %d and you are failed in the examination\n", total);
    }

    return 0;
}