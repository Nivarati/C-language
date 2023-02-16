#include<stdio.h>
int main()
{
    int a=0,b=0,n;
    printf("Enter n number to calculate sum of first N natural numbers.\n");
    scanf("%d",&n);
    while(a<=n)

    {
        b=b+a;
        a++;
 
    }
     printf("%d\n",b);
    return 0;
}