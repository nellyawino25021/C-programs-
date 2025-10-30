/*2D 1 branch room occupancy
NAME: NELLY MACLEEN AWINO 
REG NO:CT100/G/25021/24
DESCRIPTION:room occupancy 1 branch
*/
#include<stdio.h>
#define FLOORS 5
# define ROOMS 6
int main(void){
int occupancy[FLOORS][ROOMS]=

// array fixed/assigned vacant0 occupied 1
{
    {1,0,1,1,1,0,1,1,0,1},
    
    {0,0,0,0,1,1,1,1,0,1},
    
    {0,1,0,1,0,1,0,1,1,0},
    
    {1,1,1,1,0,0,0,0,0,0},
    
    {1,1,1,0,0,0,0,1,1,0}
                          
       };
    
    //loop
    int i;
    for(int i=0;i<FLOORS;i++);
    int occupied;
    
    {
   int occupied =0;
    for(int j=0;j<ROOMS;j++)
     {
        if(occupancy[i][j]==1) occupied++;
        }
    
    }
    //calculation 
    int vacant=ROOMS-occupied;
    //display
    printf("floor%d, occupied%d,vacant%d",i+1,occupied,vacant);
   
    }
    
    
      