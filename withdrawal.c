/*
NAME:NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION:ATM WITHDRAWAL 
*/
#include<stdio.h>

int main()
{
float balance,amount;
//prompt user account balance 
printf("enter your account balance:\t");
scanf("%f", &balance);

// withdraw as long as balance >0
   while(balance>0){
   printf("enter amount to withdraw:\t");
   scanf("%f",& amount);
   
   //balance calculation
   balance=balance-amount;
   
   //display balance
   printf("your balance is:%.2f\n",balance);
   }
  return 0;
}