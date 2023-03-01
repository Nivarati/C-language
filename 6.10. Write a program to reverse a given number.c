#include<stdio.h>
int main()
{
    int n,remainder,revers=0;
    printf("Enter some number\n");
    scanf("%d",&n);
    while( n > 0 )
    {
    remainder = n % 10 ;
    n = n / 10 ;
    revers = revers * 10 + remainder ;
    }
    printf("%d",revers);

    return 0;
}
