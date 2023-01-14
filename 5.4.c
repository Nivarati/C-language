#include<stdio.h>
int main()
{
    int a=1,n;
    printf("Enter n number to print odd natural number\n");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d\n",a);
        a+=2;
    }

    return 0;
}