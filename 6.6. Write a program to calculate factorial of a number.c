#include<stdio.h>
int main()
{
    int a=1,b=1,n;
    printf("Enter n number to calculate factorial of a number\n");
    scanf("%d",&n);
    while(a<=n)

    {
        b=b*a;
        a++;
 
    }
     printf("%d\n",b);
    return 0;
}