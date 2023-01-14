#include<stdio.h>
int main()
{
    int a=1,n,b;
    printf("Enter number to print cubes of the first N natural numbers\n");
    scanf("%d",&n);
    while(a<=n)
    {
        b=a;
        a=a*a*a;
        printf("%d\n",a);
        a=b;
        a++;
    }

    return 0;
}