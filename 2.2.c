#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number for Unit digit\n");
    scanf("%d",&a);
    b=a/10;
    printf("Unit digit is %d",b);

    return 0;
}