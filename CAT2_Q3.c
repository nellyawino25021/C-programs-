/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION:File display
*/
#include <stdio.h>// I/o function
#include <stdlib.h>//standard library for memory

void writeInputFile();
void processFile();
void displayFiles();

int main() {// 3functions
    writeInputFile();//prompt integers in input.txt
    processFile();//read integer in input.txt saves to output.txt
    displayFiles();//format and read
    return 0;
}

// prompt user to input 10 integer and store input.txt
void writeInputFile() {
    FILE *fp;
    int i, num;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }
//prompt integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
}

// read integer from input.txt, calculate sum,average to output.txt
void processFile() {
    FILE *fp_in, *fp_out;
    int num, sum = 0, count = 0;
    float average;

    fp_in = fopen("input.txt", "r");
    if (fp_in == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }
//calculate sum and average
    while (fscanf(fp_in, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp_in);
//average formulae
    average = (float)sum / count;

    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }
//display sum and average
    fprintf(fp_out, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(fp_out);//close the file
}

// read,display,format contents of input.txt and output.txt
void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);//close the file

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);//close the file
}