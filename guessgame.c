/*
NAME:NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION; GUESS GAME 
*/

//include:opens toolbox for your program 

#include<stdio.h>// for printf and scanf(I/o function)
#include<stdlib.h>//for rand () and srand() (standard library)
#include<time.h>//for time(time library)

int main(){

int number=13,guess, attempt=0;

srand(time(0));//random number generator 

number=rand() % 20 + 1 ;//give random number btw(1-20) inclusive 

while (guess!=number){//loop variable 
    printf("Enter guess (1-20):");//print message on screen
    scanf("%d",&guess);//read user input
    attempt++;//count how many guess made
    
    if(guess>number)
      printf("too high!\n");
    
    else if(guess<number)
    printf("too low! \n");
     
     //display total guess attempt
   else{
        printf("congratulations!correct guess in:%d attempt s\n", attempt);
       
        break;//stops loop when you guess correctly
     
        }
    }
    return 0;
}