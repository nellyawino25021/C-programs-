/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION;TAXwages
*/    
#include <stdio.h>

int main() {
//ask for hours worked and wages
    float wage;
    float hours;
    float tax;
    float netPay;
    float grossPay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay
    if (hours > 40) {//overtime excess of 40hours
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    } else {
        grossPay = hours * wage;//normal gross calculation
    }
    
    // Calculate tax using if...else loop
    if (grossPay <= 600) {
        tax = 0.15 * grossPay;
    } else {//tax rate of 15%of the first and 20% of the rest
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));
    }
    
    //calculation of netPay
    netPay = grossPay - tax;
    
    // print gross pay,taxes,net pay
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}


