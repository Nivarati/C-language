#include<stdio.h>
int main()
{
    int a=1,b,n;

    printf("Enter number to print a table of N\n");
    scanf("%d",&n);
    while(a<=10)
    {
       
        printf("%d * %d = %d\n",n,a,b=n*a);
        a++;
    }
    

    return 0;
}