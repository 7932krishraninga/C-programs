// simple grade calculator
#include<stdio.h>
void main(){
    int score;
    char grade;

    printf("\nEnter score from (0-100):");
    scanf("%d",&score);

    (score>=90 && score<=100) ? grade = 'A' : (score>=80 && score<=90) ? grade = 'B' : (score>=70 && score<=80) ? grade = 'C' : (score>=60 && score<=70) ? grade = 'D' : (score>=50 && score<=60) ? grade = 'E' : (score>=0 && score<50) ? grade = 'F':printf("");


    switch(grade){
        case 'A':
            printf("\n Excellent Work! Your Grade is A.");
            break;
        case 'B':
            printf("\n Well Done! Your Grade is B.");
            break;
        case 'C':
            printf("\n Good Job! Your Grade is C.");
            break;
        case 'D':
            printf("\n You Passed,but could do better, Your Grade is D.");
            break;
        case 'E':
            printf("\n Needed Hark Work, Your Grade is E.");
            break;
        case 'F':
            printf("\n Sorry,You Failed, Your Grade is F.");
            break;

        default:
            printf("invalid input ! Enter number between (0-100)");
    }

    if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E'){
        printf("\nYou Are Eligible For Next Level.");
    }
    else if(grade=='F'){
        printf("\nPlease Try Again Next Time.");
    }
}