#include<stdio.h>

int main(){
    int num;
    printf("Enter number upto which you wanna print numbers.\n");
    scanf("%d", &num);

    int i=0;
    while (i<=num)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}