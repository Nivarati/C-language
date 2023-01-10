#include<stdio.h>
int main()
{
    float a;
    printf("input INR\n");
    scanf("%f",&a);
    a=a*76.23;
    printf("Converted in USD %.3f",a);

    return 0;
}