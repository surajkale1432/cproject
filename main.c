#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projectDefinition.c"
#include "rawDataBooks.c"
void main()
{
    struct Book*book;
    book = (Book*)malloc(sizeof(Book) * size);
    char choice[20];
    int ch = 0;
    char *str;
    char chch;
    rawData(book);
    do
    {
        printf("\n*******************************************************************\n");
        printf("\nWelcome To Book Management System.\nPlease Select Your Choice.\n");
        printf("1. Add Book to Library.\n2. Display All Books Info.\n3. Search Books by ID\n4. Search Books by Name ");
        printf("\n5. Search Books by Author\n6. Search Books by Category.\n7. Remove Book from Library\n8. Total Books in Library\n9. Update Book Info\n10. Sort Books\n0. Exit");
        printf("\nChoice = ");
        fflush(stdin);
        if (scanf("%d", &ch))
        {
            // str = choice;
            // ch = atoi(str);
            // if (!(ch > 0 && ch < 11))
            // {
            //     printf("\nOops...!!! Something Went Wrong Please Try Again Later.");
            // }
            // else if (ch > 0 && ch < 11)
            // {
            if (ch == 1)
            {
                if (totalBooks == size)
                {
                    printf("\n Your Storage is full Do You want to increase Storage\nY/N\n");
                    fflush(stdin);
                    scanf("%c", &chch);
                    if (chch == 'y' || chch == 'Y')
                    {
                        book = resizeStructArray(book, totalBooks);
                    }
                    else if (chch == 'n' || chch == 'N')
                    {
                        return;
                    }
                }
            }
            doOperation(book, ch);
        }
        else
        {
            printf("Error");
        }
    } while (ch != 11);
}
