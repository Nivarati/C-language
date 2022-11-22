#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter radius for calculate Area of a circle\n");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("\"Area of circle is %.3f having the radius %d\".",area,r);

    return 0;
}