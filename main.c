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
        printf("1. Add Book to Library.\n2. Display Book Info.\n3. Search Books\n\t31. Book by ID\n\t32. Book by Name ");
        printf("\n\t33. Book by Author\n\t34. Book by Category.\n4. Update Book Info");
        printf("\nChoice = ");
        scanf("%d", &choice);
        doOperation(book, choice);
    } while (choice > 0 && choice < 10);
}
