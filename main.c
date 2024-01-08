#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projectDefinition.c"
#include "rawDataBooks.c"
void main()
{
    struct Books book[50];
    char choice[20];
    int ch;
    char *str;
    rawData(book);
    _label_loop1: 
    do
    {
        printf("\n*******************************************************************\n");
        printf("\nWelcome To Book Management System.\nPlease Select Your Choice.\n");
        printf("1. Add Book to Library.\n2. Display All Books Info.\n3. Search Books by ID\n4. Search Books by Name ");
        printf("\n5. Search Books by Author\n6. Search Books by Category.\n7. Remove Book from Library\n8. Total Books in Library\n9. Update Book Info\n10. Sort Books\n0. Exit");
        printf("\nChoice = ");
        scanf("%s", &choice);
        str = choice;
        ch = atoi(str);
        if (!(ch > 0 && ch < 11))
        {
            printf("\nOops...!!! Something Went Wrong Please Try Again Later.");
            goto _label_loop1;
        }
        else if (ch > 0 && ch < 11)
        {
            doOperation(book, ch);
        }
    }
    while (ch > 0 && ch < 11);
}
