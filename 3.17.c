#include<stdio.h>
int main()
{
    int a=4,b=5,c=5;
    printf("Enter length of sides of tringle to check tringle is valid or not valid\n");
    if( (a+b>c) && (b+c>a) && (c+a>b) )
    printf("Tringle is valid\n");
    else
    printf("Tringle is not valid\n");

 return 0;
}