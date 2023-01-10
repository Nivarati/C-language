#include<stdio.h>
int main()
{
    int a=3,   count=0;
    int result=0;

    result=a&1;
    count++;
    if(result==1)
    printf("LSB first 1 is at %d positin\n",count);
    a=a>>1;

    result=a&1;
    count++;
    if(result==1)
    printf("LSB 1 first is at %d positin\n",count);
    a=a>>1;

    result=a&1;
    count++;
    if(result==1)
    printf("LSB 1 first is at %d positin\n",count);
    a=a>>1;
    

    return 0;
}