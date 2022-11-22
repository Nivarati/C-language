#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter date of birth \"27/11/1977\" format");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("Day-%d ,Month-%d , Year-%d",a,b,c);

    return 0;
}