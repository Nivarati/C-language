#include<stdio.h>
int main()
{
    int a=123,  b;
    b=a%10;
    a=a/10;
    b=b*100;
    a=b+a;
    printf("Rotated number is %d\n",a);
    
    return 0;
}