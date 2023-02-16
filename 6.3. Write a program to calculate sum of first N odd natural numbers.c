#include<stdio.h>
int main()
{
    int a=1,b=0,n;
    printf("Enter n number to calculate sum of first N odd natural numbers\n");
    scanf("%d",&n);
    while(a<=n)

    {
        b=b+a;
        a+=2;
 
    }
     printf("%d\n",b);
    return 0;
}