/*
NAME:NELLY MACLEEN AWINO
REG NO: CT100/G/25021/24
DESCRIPTION:WATER BILL CALCULATOR
*/
#include<stdio.h>

int main()
{
    int unit ;
    float bill=0;
//1. prompt unit consumed
    printf("Enter  water unit consumed\n");
    scanf("%d",&unit);

//2.total bill  calculation
    if(unit>=0 && unit<=30){
        bill=unit*20;
        printf("\ntotal bill is ksh %.2f",bill);
    }

    else if ( unit>30 && unit<=50){
       bill=unit*25;
        printf("\ntotal bill is ksh %.2f",bill);
    }

    else if ( unit>=60){
       bill= unit*30;
        printf("\ntotal bill is ksh %.2f",bill);
    }

    //3.Display total bill in 2dp
    printf("\nTotal bill:%.2f\n",bill);

    return 0;
}