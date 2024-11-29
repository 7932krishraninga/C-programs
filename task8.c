#include<stdio.h>

// triangle angle finder
void main()
{
    int angle1,angle2,angle3;
    printf("\nenter angle1:");
    scanf("%d",&angle1);
    printf("\nenter angle2:");
    scanf("%d",&angle2);

    angle3=180-angle1-angle2;
    printf("\n3rd angle is:%d deg",angle3);

}