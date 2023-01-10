#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number for swapping.\n");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("a=%d b=%d",a,b);
    

    return 0;
}