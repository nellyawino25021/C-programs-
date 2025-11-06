/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION:Daily sales
*/
#include <stdio.h>

int main() {//open file
    FILE *Fptr = fopen("sales.txt", "r");
    if (Fptr = NULL) {
        printf("error!");
        return 1;
    }

    float amount, total = 0;
//read amount of single transaction 
    while (fscanf(Fptr, "%f", &amount) == 1) {
    //calculation total sales
        total += amount;
    }

    fclose(Fptr);//close file
//display total sales for the day
    printf("Total sales: %.2f", total);

    return 0;
}