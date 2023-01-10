#include<stdio.h>
int main()
{
    int a;
    printf("Enter number to check divisible by 2 and 3\n");
    scanf("%d",&a);
    if ( 0==a%2 || 0==a%3 )
    printf("divisible by 2 and 3\n");
    else
    printf("%d this number does not diviAsible by 2 and 3\n",a);
   


    return 0;
}