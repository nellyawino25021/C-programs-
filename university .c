/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION: student record
*/
#include <stdio.h>

typedef struct {//diff datatype
    char name[50];
    char regNo[20];
    int totalMarks;
} Student;

int main() {
    Student s;
    //open file
    FILE *Fptr= fopen("result.dat", "rb");
    if (Fptr= NULL) {
        printf("error!");
        return 1;
    } 
    //student database
    printf("Student Results:");
    while (fread(&s, sizeof(Student), 1, Fptr)) {
        printf("Name: %s, Marks: %d", s.name, s.totalMarks);
    }
//close file
    fclose(Fptr);
    return 0;
    }