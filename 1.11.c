#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter time in \"HH:MM\" format\n");
    scanf("%d:%d",&a,&b);
    printf("%d hour and %d Minute",a,b);

    return 0;
}