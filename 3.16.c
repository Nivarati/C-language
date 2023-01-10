#include<stdio.h>
int main()
{
    char a;
    printf("Enter number to check whether is Uppercase,Lowercase,digit or special character\n");
    scanf("%c",&a);
    if( a>='A' && a<='Z' )
    printf("Uppercase\n");
    else if( a>='a' && a<='z')
    printf("Lowercase\n");
    else if( a>=48 && a<=57 )
    printf("Digit\n");
    else
    printf("Special character\n");

 return 0;
}