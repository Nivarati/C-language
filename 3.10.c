#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter cost price and selling price to check profit and loss percentage\nEnter cost price\n");
    scanf("%d",&a);
    printf("Enter selling price\n");
    scanf("%d",&b);
    c=b-a;
    a=100*c/a;
    if(a>=0)
    printf("%d percent profit\n",a);
    else
    printf("%d percent loss\n",a);

    return 0;
}