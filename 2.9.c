#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=sizeof(char);
    printf("char data type is %d byte\n",a);

    b=sizeof(int);
    printf("int data type is %d byte\n",b);

    c=sizeof(float);
    printf("float data type is %d byte\n",c);

    d=sizeof(double);
    printf("double data type is %d byte\n",d);
}