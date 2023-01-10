#include<stdio.h>
int main()
{
    int a,b,c,dist;
    printf("Enter a,b,c value number\n");
    scanf("%d %d %c",&a,&b,&c);
    dist = a*a -4*b*c;
    if(dist>0)
    printf("Real & distinct\n");
    else if(dist<0)
    printf("Imaginary\n");
    else 
    printf("Real and Equal\n");
    
    return 0;
}