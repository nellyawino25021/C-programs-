/*
NAME: NELLY AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION: INCOME,AGE CONDITION 
*/
#include<stdio.h>
int main(){

int age;
float income ;
//input age, income 
    printf("Enter your age:");
    scanf("%d",&age);
    
    printf("Enter your income:");
    scanf("%f",&income);
    //Decision
    if( age>=21&& income>=21000){
    //output
    printf("Congratulations you qualify for loan\n");
    }else{
    printf("Unfortunately,we are unable to offer you loan at this time\n");}
    
    return 0;
}