/*
NAME: NELLY MACLEEN AWINO 
REG:CT100/G/25021/24
DESCRIPTION:Book borrowing
*/
#include <stdio.h>

int main() {
    char bookTitle[100];
    FILE *Fptr;

    //2.open file not to delete record in append mode
    Fptr = fopen("borrowed_books.txt", "a");
    
    if (Fptr=NULL) {//if not open show error
        printf("Error!");
        
        return 1;//indicate error
    }
   // ============================================
    //1.prompt book title
    printf("Enter book title:\n");
    scanf("%c",& bookTitle);
    // Read book title
    fgets(bookTitle, sizeof(bookTitle),Fptr); 
           //data.        //size.         //where
    // Write the book title 
    fprintf(Fptr, "%s", bookTitle);

//  =============================================             
     fclose(Fptr);//close file

    // Confirmation message
    printf("Book title successfully stored.");
    
return 0;
}