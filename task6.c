#include<stdio.h>

// celsius to fahrenheit
void main()
{
    float c,f;
    printf("\nenter celsius:");
    scanf("%f",&c);

    f=(1.8*c)+32;
    printf("%.1f",f);

}