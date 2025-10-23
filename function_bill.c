/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION: CALCULATE ELECTRICITY BILL 
*/
#include<stdio.h>
//function prototype 
int bill (int unit,int amount);

void main(){
int unit,bill,result,result_1,result_2;

printf("\n..calculate electricity bill..\n");
 printf("enter number of units:\n",unit);
 scanf("%d",&unit);
 
 //calling function 
 result= bill=(100*10);
 result_1=bill=(100*15);
 result_2=bill=(200*20);
 
 //output
 printf("total bill is=%d\n", result);
 printf("total bill is=%d\n",result_1);
 printf("total bill is=%d\n", result_2);
  }
  
//called function 
int bill(int unit,int amount){
int bill;
bill=unit*amount;
return bill;
}