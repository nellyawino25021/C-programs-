/*1D revenue tracker
NAME: NELLY MACLEEN AWINO 
REG NO: CT100/G/25021/24
DESCRIPTION:1D weekly revenue tracker
*/
#include<stdio.h>
int main(){

// input days revenue
float revenue[7];
float total=0.0;
float average;
int i;
printf("enter daily 7days revenue amount:\n");

//loop days
for(i=0;i<7;i++){
printf("Day %d:", revenue[i]);
scanf("%f",& revenue[i]);
//revenue calculation 
total+=revenue[i];
}

//output
average=total/7;
printf("total weekly revenue is %.2f\n",total);
printf("average daily revenue is %.2fn", average);
 return 0;
}