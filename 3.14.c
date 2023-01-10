#include<stdio.h>
int main()
{
    int a;
    printf("Enter number to check divisible by 7 or 3\n");
    scanf("%d",&a);
    if ( 0==a%7 || 0==a%3 )
    printf("divisible by 7 or 3\n");
    else
    printf("%d this number does not diviAsible by 7 or 3\n",a);
    
    return 0;
}