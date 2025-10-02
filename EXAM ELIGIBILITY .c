/*
NAME: NELLY MACLEEN AWINO
REG NO:CT100/G/25021/24
DESCRIPTION:EXAM ELIGIBILITY
*/
#include<stdio.h>
int main()
{

    int marks=75;
    int attendance =40;
    printf("Enter attendance percentage\n");
    scanf("%d",& attendance);
    printf("Enter average marks\n");
    scanf("%d",& marks);
//if..else if...else eligibility
    if(attendance >=75 ) { //condition 1
        printf("your are eligible for exam\n");
    }
    else if (marks>=40) { //condition 2
        printf("your are eligible for exam\n");
    }
// otherwise
    else {
        printf("not eligible for exam");
    }
    return 0;
}
