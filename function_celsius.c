/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION: CONVERT TO CELSIUS 
*/
#include<stdio.h>
//function prototype 
int celsius (int Fahrenheit);

void main(){
int celsius, Fahrenheit, result;
printf("\n convert to celsius \n");
printf("enter temperature in Fahrenheit:\n");
scanf("%f",&Fahrenheit);

//calling function 
result=celsius=(98.6,-32*0.6);

//output
 printf("temperature in Celsius is:%.1f\n",result);
 
 }
//called function 
int celsius( int Fahrenheit){
int celsius;
celsius=Fahrenheit-32*0.6;
return celsius ;
}