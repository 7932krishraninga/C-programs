#include<stdio.h>

// Gross Salary
void main()
{
    int bSalary;
    float HRA,DA,TA,gross;
    printf("\nenter bSalary:");
    scanf("%d",&bSalary);
    
    HRA=bSalary*0.1;
    printf("\nHRA : %f",HRA);
    DA=bSalary*0.05;
    printf("\nDA : %f",DA);
    TA=bSalary*0.08;
    printf("\nTA : %f",TA);

    gross=bSalary+HRA+DA+TA;
    printf("Gross Salary is:%f",gross);
}