#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number for swapping \n");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d\n",a,b);

    return 0;
}