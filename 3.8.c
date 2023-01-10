#include<stdio.h>
int main()
{
    int a,b,dist;
    printf("Enter leap year\n");
    scanf("%d",&a);
    b = a%400;
    if( b==0 )
    printf("This is leap year 1\n");
    else 
    {
    a = a%4;
    if( a==0 )
    printf("This is leap year 2\n");
    else
    printf("This is not leap year 3\n");
    }
    return 0;
}