#include<stdio.h>
int main()
{
    int a;
    printf("Enter number to check whether positive,negetive or zero number\n");
    scanf("%d",&a);
    if(a>0)
    printf("Positive number\n");
    else if(a==0)
    printf("Zero number\n");
    else
    printf("Negetive number\n");

 return 0;
}