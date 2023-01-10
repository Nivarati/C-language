#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x&1;
    if(y==1)
    printf("Odd number\n");
    else
    printf("Even number\n");

    return 0;
    
}