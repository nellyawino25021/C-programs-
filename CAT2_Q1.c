/*
NAME: NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION:2D array scores
*/
#include <stdio.h>

int main() {
//declare and initialize 2D array named scores
//2row 2 column
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };
    //print element using nested loop

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}