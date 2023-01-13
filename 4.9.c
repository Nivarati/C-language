#include<stdio.h>
int main()
{
    int a=1,b;
    while(a<=10)
    {
        b=a;
        a=a*a*a;
        printf("%d\n",a);
        a=b;
        a++;
    }

    return 0;
}