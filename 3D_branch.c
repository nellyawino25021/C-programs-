/*3D multiple branches
NAME: NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION: multiple branches 5floors each 10 rooms
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int totaloccupied=0; 
int chain[3][5][10]; 
// assign room occupancy 
 srand(time(NULL));
 //loop occupancy 
 for(int branch=0;branch<3;branch++)
 {
 for (int floor=0;floor<5;floor++)
 {
 for(int room=0;room<10; room++)
 {
 chain[branch][floor][room]=rand() %2;
 
 //calculation 
 totaloccupied +=chain[branch][floor][room];
         }
      }
   }
 
  //display
 printf("total occupied rooms across all branches is %d \n", totaloccupied);
 
    return 0;
}