/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION: CALCULATE FARE 
*/
#include<stdio.h>
//function prototype 
int fare(int distance,int amount);

void main(){
int distance,fare,result;
// input
printf("enter distance travelled in km:\n");
scanf("%d",&distance);

//calling function 
result=fare=(10*50);

//output or returns
printf("total fare is %d\n",fare);
    
}
//called function 
int fare(int distance,int amount){
int fare;
fare=distance*amount;
return fare;
}
    