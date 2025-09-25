/*
NAME: NELLY AWINO 
REG NO:CT100/G/25021
DESCRIPTION: VOLUME,SURFACE AREA
*/
#include<stdio.h>
int main(){

//declare variables 
float radius, height, volume, surfaceArea ;

//prompt user for input(radius,height)
    printf("Enter the radius of the cylinder:");
    scanf("%f",& radius);//read
    
    printf("Enter the height of the cylinder:");
    scanf("%f",&height);//read
    
    //calculations
    volume= 'PI' * radius * radius * height;
    surfaceArea= 2 *'PI'*radius*radius+2*'PI'*radius*height;
    
    //output result
    printf("volume of the cylinder=%.2f\n", volume);
    printf("surfaceArea of the cylinder= %.2f\n",surfaceArea);
    
    return 0;
}