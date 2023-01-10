#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five subjects mark\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if( a>=33 && b>=33 && c>=33 && d>=33 && e>=33 )
    printf("Your are pass\n");
    else
    printf("Your are fail\n");

    return 0;
}