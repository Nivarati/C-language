#include<stdio.h>
int main()
{
    int a=0,n;
    printf("Enter number to print the first N even natural numbers in reverse order\n");
    scanf("%d",&n);
    while(n>=a)
    {
        printf("%d\n",n);
        n-=2;
    }

    return 0;
}