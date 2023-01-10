#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    a=a%5;
    if(a==0)
    printf("Divisible number\n");
    else
    printf("Non Devisible number\n");

    return 0;
}