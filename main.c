#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projectDefinition.c"
#include "rawDataBooks.c"
void main()
{
    struct Books book[50];
    int choice;
    rawData(book);

    do
    {
        printf("\n*******************************************************************\n");
        printf("\nWelcome To Book Management System.\nPlease Select Your Choice.\n");
        printf("1. Add Book to Library.\n2. Display Book Info.\n3. Search Books by ID\n4. Search Books by Name ");
        printf("\n5. Search Books by Author\n6. Search Books by Category.\n7. Total Books in Library\n8. Update Book Info");
        printf("\nChoice = ");
        scanf("%d", &choice);
        doOperation(book, choice);
    } while (choice > 0 && choice < 10);
}
