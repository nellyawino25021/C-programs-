/*
NAME:NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/25
DESCRIPTION:DATA BUNDLE MENU PURCHASE
*/

#include<stdio.h>

int main()
{
int choice;
int cost;

//1.display data menu

printf ("Mobile data bundle purchase menu\n");
  printf("-----------------------------------\n");
  printf("|OPTION | BUNDLE | COST (KES)|\n"); 
  printf("-----------------------------------\n");
  printf("|1.     |100MB.  |50.        |\n"); 
  printf("|2.     |500MB.  |200.       |\n"); 
  printf("|3.     |1GB.    |350.       |\n"); 
  printf("|4.     |2GB.    |600.       |\n"); 
  printf("-----------------------------------\n");
  
  //2.ask user to enter  choices
  printf("enter data bundles choice from(1-4):\n");
  scanf("%d" ,& choice);
  
  //3.use switch statement for selection and cost
  switch (choice){
  case 1:
  printf("you selected 100MB @ 50KES \n");
  break ;
  case 2: 
  printf("you selected 500MB @ 200KES\n");
  break;
  case 3:
  printf("you selected 1GB @ 350KES \n");
  break;
  case 4: 
  printf("you selected 2GB @ 600KES\n");
  break;
  
  default:
  printf("invalid choice!please select choice (1-4) \n");
  
  }
  
    return 0;
}