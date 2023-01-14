#include<stdio.h>
int main()
{
    int a=0,n;
    printf("Enter n number to print reverse odd natural number\n");
    scanf("%d",&n);
    while(n>=a)
    {
        printf("%d\n",n);
        n-=2;
    }

    return 0;
}