#include<stdio.h>
int main()
{
    int a=5;
    printf("Enter month number to check days in that\n");
    if( a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12 )
    printf("31 days\n");
    else if( a==4 || a==6 || a==9 || a==11 )
    printf("30 days\n");
    else
    printf("28/29 days\n");

    return 0;
}