#include<stdio.h>
int main()
{
    char a;
    printf("Enter alphabet uppercase or lowercase\n");
    scanf("%c",&a);
    if( a>='A' && a<='Z' )
    printf("Uppercase\n");
    else if( a>='a' && a<='z' )
    printf("Lowercase\n");
    else
    printf("reenter alphabet\n");

    return 0;
}